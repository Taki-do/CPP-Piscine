/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:16:20 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/26 11:16:20 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45) {
    rtarget = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy) {
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
    if (this != &copy)
        AForm::operator=(copy);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const {
    return (rtarget);
}

bool    RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (getSigned())
    {
        if (executor.getGrade() <= getGradeExec())
        {
            if (rand() % 2)
                std::cout << getTarget() << "has been robotomized successfully !" << std::endl;
            else
                std::cout << getTarget() << "has not been robotomized.." << std::endl;
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::NotSignedException();
    return (true);
}