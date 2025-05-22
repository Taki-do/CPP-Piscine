/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:15:34 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 11:15:34 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string fname, int gSign, int gExec) : name(fname), gradeSign(gSign), gradeExec(gExec) {
    _signed = false;
}

Form::Form(const Form& copy)  : name(copy.name), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec) {
    _signed = copy._signed;
    *this = copy;
}

Form& Form::operator=(const Form& copy) {
    (void)copy;
    return (*this);
}

Form::~Form() {}

std::string Form::getName() {
    return (name);
}

bool    Form::getSigned() {
    return (_signed);
}

int Form::getGradeSign() {
    return (gradeSign);
}

int Form::getGradeExec() {
    return (gradeExec);
}

void    Form::beSigned(Bureaucrat& b) {
    if (b.getGrade() <= this->getGradeSign())
        this->_signed = true;
    else if (b.getGrade() > this->getGradeSign())
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, Form& f) {
    std::string status = "true";
    if (f.getSigned() == 0)
        status = "false";
    os << "This form's name is : " << f.getName() << ", it need grade " << f.getGradeSign() <<
    " to be signed and need grade " << f.getGradeExec() << " to be executed, currently this form' signed status is " <<
    status << std::endl;
    return (os);
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade Too Hight !");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade Too Low !");
}