/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:11:59 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/25 15:07:52 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class AForm {
    private:
        const std::string   name;
        bool                _signed;
        const int           gradeSign;
        const int           gradeExec;
    public:
        AForm();
        AForm(std::string fname, int gSign, int gExec);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
        virtual ~AForm();
        std::string     getName() const ;
        bool            getSigned() const;
        int             getGradeSign() const;
        int             getGradeExec() const;
        void            beSigned(Bureaucrat& b);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class NotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        virtual bool    execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, AForm& f);

#endif