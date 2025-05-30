/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:21:15 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/09 11:21:15 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string z_name) {
    name = z_name;
}

Zombie::~Zombie() {
    std::cout << name << ": get destroyed." << std::endl;
}

void Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}