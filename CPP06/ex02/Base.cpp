/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:34:14 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 12:01:08 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base * generate(void) {
	int	choice;

	srand(time(NULL));
	choice = rand() % 3;
	if (!choice)
		return (new A());
	else if (choice == 1)
		return (new B());
	return (new C());
}

void identify(Base* p) { //pas opti
	char	id;
	A* aptr = dynamic_cast<A*>(p);
	if (aptr)
		id = 'A';
	B* bptr = dynamic_cast<B*>(p);
	if (bptr)
		id = 'B';
	C* cptr = dynamic_cast<C*>(p);
	if (cptr)
		id = 'C';
	std::cout << "The object pointed by *p is " << id << std::endl;
}

void identify(Base& p) {
	try {
		A aref = dynamic_cast<A&>(p);
		std::cout << "The object pointed by &p is A" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		B bref = dynamic_cast<B&>(p);
		std::cout << "The object pointed by &p is B" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		C cref = dynamic_cast<C&>(p);
		std::cout << "The object pointed by &p is C" << std::endl;
		return ;
	}
	catch (...) {}
} 