/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:20:08 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/10 10:50:25 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_b) {
    name = name_b;
}

void HumanB::setWeapon(Weapon &weapon_set) {
    weapon_b = &weapon_set;
    
}

void HumanB::attack() {
    std::cout << name << " attacks with their "
              << weapon_b->getType() << std::endl;
}