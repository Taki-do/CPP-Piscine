/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:55:55 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/21 11:55:55 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	std::cout << "[Shrubbery]" << std::endl;
	try {
		AForm		*f = new ShrubberyCreationForm("Shru");
		Bureaucrat 	b(2, "bob");
		b.incrGrade();
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << "[Robotomy]" << std::endl;
	try {
		AForm		*f = new RobotomyRequestForm("Robot");
		Bureaucrat 	b(44, "bob");
		b.decrGrade();
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << "[Presidential]" << std::endl;
	try {
		AForm		*f = new PresidentialPardonForm("President");
		Bureaucrat 	b(6, "bob");
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
}