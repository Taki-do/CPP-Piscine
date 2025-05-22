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
#include "Form.hpp"

int main() {
	std::cout << "[This one is a test where the incrementation make the form signed succesfully !]" << std::endl;
	try {
		Form		f("Incrementation", 1, 1);
		Bureaucrat 	b(2, "bob");
		b.incrGrade();
		b.signForm(f);
        std::cout << b;
		std::cout << f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << "[This one is a test where the decrementation make the form signing failed !]" << std::endl;
	try {
		Form		f("Decementation", 1, 1);
		Bureaucrat 	b(1, "bob");
		b.decrGrade();
		b.signForm(f);
        std::cout << b;
		std::cout << f;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
}