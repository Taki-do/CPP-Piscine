/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:13:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 13:13:39 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string fname, int gSign, int gExec) : name(fname), gradeSign(gSign), gradeExec(gExec) {
    _signed = false;
}

AForm::AForm(const AForm& copy)  : name(copy.name), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec) {
    _signed = copy._signed;
    *this = copy;
}

AForm& AForm::operator=(const AForm& copy) {
    (void)copy;
    return (*this);
}

AForm::~AForm() {}

std::string AForm::getName() {
    return (name);
}

bool    AForm::getSigned() {
    return (_signed);
}

int AForm::getGradeSign() {
    return (gradeSign);
}

int AForm::getGradeExec() {
    return (gradeExec);
}

void    AForm::beSigned(Bureaucrat& b) {
    if (b.getGrade() <= this->getGradeSign())
        this->_signed = true;
    else if (b.getGrade() > this->getGradeSign())
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, AForm& f) {
    std::string status = "true";
    if (f.getSigned() == 0)
        status = "false";
    os << "This form's name is : " << f.getName() << ", it need grade " << f.getGradeSign() <<
    " to be signed and need grade " << f.getGradeExec() << " to be executed, currently this form' signed status is " <<
    status << std::endl;
    return (os);
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("Grade Too Hight !");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("Grade Too Low !");
}