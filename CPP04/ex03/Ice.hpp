/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:06:20 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 18:12:17 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Cure.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& copy);
		Ice* clone() const;
		void use(ICharacter& target);
		~Ice();
};

#endif