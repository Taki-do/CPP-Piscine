/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:16:48 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/09 18:16:48 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_a, Weapon weapon_give) {
    name = name_a;
    weapon_a = weapon_give;
}

void HumanA::attack() {
    std::cout << name << " attacks with their "
              << weapon_a.getType() << std::endl;
}