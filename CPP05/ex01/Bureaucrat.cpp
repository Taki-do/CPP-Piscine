/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:48:19 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/21 11:48:19 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int Bureaucrat::getGrade() {
    return (grade);
}

const std::string Bureaucrat::getName() {
    return (name);
}

Bureaucrat::Bureaucrat(int bgrade, std::string bname) {
    grade = bgrade;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    name = bname.c_str();
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

void    Bureaucrat::signForm(Form& f) {
    try {
        f.beSigned(*this);
        std::cout << this->getName() << " signed form " << f.getName() << std::endl;
    }
    catch (const Form::GradeTooHighException& e) {
        std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}