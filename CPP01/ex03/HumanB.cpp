/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:20:08 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/09 18:20:08 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_b, Weapon weapon_give) {
    name = name_b;
    weapon_b = weapon_give;
}

void HumanB::attack() {
    std::cout << name << " attacks with their "
              << weapon_b.getType() << std::endl;
}