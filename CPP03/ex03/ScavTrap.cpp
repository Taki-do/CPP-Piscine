/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:27:23 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/01 09:49:19 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default constructor for ScavTrap has been called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) {
    std::cout << "Constructor for ScavTrap has been called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " has been expulsed far far away in the galaxy.. (destructor)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    std::cout << "Copy for ScavTrap has been called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
    std::cout << "Operator assignement ScavTrap has been called" << std::endl;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damages !" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << name << " (ScavTrap) is now in defense mode" << std::endl;
}

int ScavTrap::getHitPoint(void) {
    return (hit_points);
}

int ScavTrap::getEnergyPoint(void) {
    return (energy_points);
}

int ScavTrap::getAttackDamage(void) {
    return (attack_damage);
}