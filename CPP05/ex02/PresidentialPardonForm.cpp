/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:25:35 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/26 11:25:35 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5) {
    ptarget = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy) {
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
    if (this != &copy)
        AForm::operator=(copy);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const {
    return (ptarget);
}

bool    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (getSigned())
    {
        if (executor.getGrade() <= getGradeExec())
            std::cout << getTarget() << " has been pardoned by Zaphod Beebleblox." << std::endl;
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::NotSignedException();
    return (true);
}