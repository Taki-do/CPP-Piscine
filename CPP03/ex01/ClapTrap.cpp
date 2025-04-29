/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:36:52 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/29 10:26:30 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "Default constructor for ClapTrap has been called" << std::endl;
    name = "default";
}

ClapTrap::ClapTrap(std::string s) : hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "Constructor for ClapTrap has been called" << std::endl;
    name = s;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << "Copy for ClapTrap has been called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
    std::cout << "Operator assignement ClapTrap has been called" << std::endl;
    if (this != &copy)
        this->name = copy.name;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been expulsed far far away in the galaxy.. (destructor)" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damages !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damages !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << name << " have now back " << amount << " health points !" << std::endl;
}
