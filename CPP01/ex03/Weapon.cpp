/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:23:51 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/10 10:44:16 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    type = "";
}

Weapon::Weapon(std::string wtype) {
    type = wtype;
}

const std::string& Weapon::getType() {
    return (type);
}

void Weapon::setType(std::string s_type) {
    type = s_type;
} 