/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:55:09 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/26 12:55:09 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) {
    *this = copy;
}

Intern& Intern::operator=(const Intern& copy) {
    (void)copy;
    return (*this);
}

Intern::~Intern() {}

AForm* Intern::makeShrubbery(std::string& target) {
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::makePresidential(std::string& target) {
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomy(std::string& target) {
    return (new RobotomyRequestForm(target));
}

const char* Intern::FormDoesNotExistException::what() const throw() {
    return ("Form does not exist !");
}

AForm* Intern::makeForm(std::string fname, std::string ftarget) {
    std::string Types[] = {"shrubbery creation", "presidential pardon", "robotomy request"};

    AForm* (*formType[3])(std::string&) = {
        &Intern::makeShrubbery, &Intern::makePresidential, &Intern::makeRobotomy
    };
    for (int i = 0; i < 3; i++)
    {
        if (fname == Types[i])
        {
            std::cout << "Intern create " << fname << std::endl;
            return (formType[i](ftarget));
        }
    }
    throw FormDoesNotExistException();
}