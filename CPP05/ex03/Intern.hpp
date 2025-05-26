/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:53:00 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/26 12:53:00 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& copy);
        ~Intern();
        static AForm *makeShrubbery(std::string& target);
        static AForm *makePresidential(std::string& target);
        static AForm *makeRobotomy(std::string& target);
        AForm* makeForm(std::string fname, std::string ftarget);
        class FormDoesNotExistException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif