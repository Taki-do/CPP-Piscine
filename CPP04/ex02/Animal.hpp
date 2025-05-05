/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:59:27 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 17:40:17 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		virtual ~Animal();
		virtual std::string getType() const ;
		virtual void makeSound() const = 0;
};

#endif