/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:36:04 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/01 10:37:42 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), name("default") {
    std::cout << "Default constructor for DiamondTrap has been called" << std::endl;
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string dname) : ClapTrap(dname + "_clap_name"), name(dname) {
    std::cout << "Constructor for DiamondTrap has been called" << std::endl;
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
    std::cout << "Copy for DiamondTrap has been called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy) {
    std::cout << "Operator assignement DiamondTrap has been called" << std::endl;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " has been expulsed far far away in the galaxy.. (destructor)" << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << name << " and ClapTrap name is "
              << ClapTrap::name << std::endl;
}