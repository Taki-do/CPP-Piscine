/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:18:23 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/17 09:37:35 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		~Cat();
		std::string getType() const;
		void makeSound() const ;
};

#endif