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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, int gSign, int gExec) : AForm("ShrubberyCreationForm", gSign, gExec) {
    std::string filename;

    filename = target + "_shrubbery";
    std::ofstream w_file(filename.c_str());
    if (!w_file)
    {
        std::cerr << "Can't create file" << std::endl;
		return ;
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    if (this != &copy)
        AForm::operator=(copy);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::beSigned(Bureaucrat& b) {
    (void)b;
    std::cout << "beSigned() from Shrubbery" << std::endl;
}