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
#include "Intern.hpp"

int main() {
	std::cout << "[Shrubbery success]" << std::endl;
	try {
		Intern		randomDude;
		AForm		*f;
		f = randomDude.makeForm("shrubbery creation", "paco");
		Bureaucrat 	b(2, "bob");
		b.incrGrade();
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
		delete f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	catch (const Intern::FormDoesNotExistException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}


	std::cout << std::endl << "[Robotomy success]" << std::endl;
	try {
		Intern		randomDude;
		AForm		*f;
		f = randomDude.makeForm("robotomy request", "paco");
		Bureaucrat 	b(44, "bob");
		b.decrGrade();
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
		delete f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	catch (const Intern::FormDoesNotExistException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << "[Presidential success]" << std::endl;
	try {
		Intern		randomDude;
		AForm		*f;
		f = randomDude.makeForm("presidential pardon", "paco");
		Bureaucrat 	b(1, "bob");
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
		delete f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	catch (const Intern::FormDoesNotExistException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}


	std::cout << std::endl << "[Shrubbery failure]" << std::endl;
	try {
		Intern		randomDude;
		AForm		*f;
		f = randomDude.makeForm("shrubberie creation", "paco");
		Bureaucrat 	b(150, "bob");
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
		delete f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	catch (const Intern::FormDoesNotExistException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}


	std::cout << std::endl << "[Robotomy failure]" << std::endl;
	try {
		Intern		randomDude;
		AForm		*f;
		f = randomDude.makeForm("oui request", "paco");
		Bureaucrat 	b(150, "bob");
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
		delete f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	catch (const Intern::FormDoesNotExistException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}


	std::cout << std::endl << "[Presidential failure]" << std::endl;
	try {
		Intern		randomDude;
		AForm		*f;
		f = randomDude.makeForm("Unknowned request", "paco");
		Bureaucrat 	b(150, "bob");
		b.signForm(*f);
		b.executeForm(*f);
        std::cout << b;
		std::cout << *f;
		delete f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	catch (const Intern::FormDoesNotExistException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
}