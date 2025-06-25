/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:48:19 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/25 15:08:24 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

int Bureaucrat::getGrade() const {
    return (grade);
}

const std::string Bureaucrat::getName() const{
    return (name);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) {
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
    if (this != &copy)
        grade = copy.grade;
    return (*this);
}

Bureaucrat::Bureaucrat(int bgrade, std::string bname) : name(bname) {
    grade = bgrade;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

void    Bureaucrat::decrGrade() {
    grade++;
    if (grade > 150)
        throw GradeTooLowException();
}

void    Bureaucrat::incrGrade() {
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
    return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade Too Hight !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade Too Low !");
}

Bureaucrat::~Bureaucrat() {};

void    Bureaucrat::signForm(AForm& f) {
    try {
        f.beSigned(*this);
        if (f.getSigned())
            std::cout << getName() << " signed form " << f.getName() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void        Bureaucrat::executeForm(AForm const & form) const {
    try {
        if (form.execute(*this))
            std::cout << getName() << " executed " << form.getName() << std::endl;
    }   
    catch (const AForm::GradeTooLowException& e) {
        std::cout << "Excution form " << form.getName() << " caught: " << e.what() << std::endl;
    }
    catch (const AForm::NotSignedException &e) {
        std::cout << "Execution form " << form.getName() << " caught: " << e.what() << std::endl;
    }
}