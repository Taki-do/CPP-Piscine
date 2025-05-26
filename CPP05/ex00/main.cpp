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

int main() {
	std::cout << "[Incrementation success]" << std::endl;
	try {
		Bureaucrat b(150, "bob");
		std::cout << b;
		b.incrGrade();
        std::cout << b;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << "[Decrementation success]" << std::endl;
	try {
		Bureaucrat b(1, "bob");
		std::cout << b;
		b.decrGrade();
        std::cout << b;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << "[Incrementation failure]" << std::endl;
	try {
		Bureaucrat b(1, "bob");
		std::cout << b;
		b.incrGrade();
        std::cout << b;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << "[Decrementation failure]" << std::endl;
	try {
		Bureaucrat b(150, "bob");
		std::cout << b;
		b.decrGrade();
        std::cout << b;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
}