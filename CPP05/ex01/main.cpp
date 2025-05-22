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
	try {
		Form		f("Presidential", 1, 1);
		Bureaucrat 	b(150, "bob");
		b.incrGrade();
		b.signForm(f);
        std::cout << b;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
    catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
}