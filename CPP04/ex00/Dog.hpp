/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:25:42 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/17 09:31:40 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Cat.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		~Dog();
		std::string getType() const ;
		void makeSound() const ;
};

#endif