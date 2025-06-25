/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:11:59 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/25 14:11:32 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
    private:
        const std::string   name;
        bool                _signed;
        const int           gradeSign;
        const int           gradeExec;
    public:
        Form();
        Form(std::string fname, int gSign, int gExec);
        Form(const Form& copy);
        Form& operator=(const Form& copy);
        ~Form();
        std::string     getName();
        bool            getSigned();
        int             getGradeSign();
        int             getGradeExec();
        void            beSigned(Bureaucrat& b);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, Form& f);

#endif