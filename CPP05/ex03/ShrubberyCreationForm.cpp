/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:18:30 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 13:18:30 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
    starget = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    if (this != &copy)
        AForm::operator=(copy);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const {
    return (starget);
}

void ShrubberyCreationForm::beSigned(Bureaucrat& b) {
    
    (void)b;
    std::cout << "beSigned() from Shrubbery" << std::endl;
}

bool    ShrubberyCreationForm::execute(Bureaucrat const & executor) const  {
    if (getSigned())
    {
        if (executor.getGrade() <= getGradeExec())
        {
            std::string filename;

            filename = getTarget() + "_shrubbery";
            std::ofstream w_file(filename.c_str());
            if (!w_file)
            {
                std::cerr << "Can't create file" << std::endl;
                return (false);
            }
            w_file <<   " /\\ " << std::endl <<
                        "/||\\" << std::endl <<
                        "/||\\" << std::endl <<
                        " || "  << std::endl <<
                        "----"  << std::endl;
            w_file <<   " /\\ " << std::endl <<
                        "/||\\" << std::endl <<
                        "/||\\" << std::endl <<
                        " || "  << std::endl <<
                        "----"  << std::endl;
            w_file.close();
        }
        else
            throw AForm::GradeTooLowException(); //maybe more exact error ?
    }
    else
        throw AForm::NotSignedException();
    return (true);
}
