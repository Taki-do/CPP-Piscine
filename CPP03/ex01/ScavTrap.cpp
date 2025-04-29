/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:27:23 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/29 12:14:44 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default constructor for ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) {
    std::cout << "Constructor for ScavTrap has been called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " has been expulsed far far away in the galaxy.. (destructor)" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damages !" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << name << " (ScavTrap) is now in defense mode" << std::endl;
}