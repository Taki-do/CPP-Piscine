/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:36:04 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/30 14:39:29 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "Default constructor for DiamondTrap has been called" << std::endl;
    name = "DiamondDefault";
}

DiamondTrap::DiamondTrap(std::string dname) {
    std::cout << "Constructor for DiamondTrap has been called" << std::endl;
    name = dname + "_clap_name";
    FragTrap::hit_points = FragTrap().getHitPoint();
    ScavTrap::energy_points = ScavTrap().getEnergyPoint();
    FragTrap::attack_damage = FragTrap().getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
    
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy) {
    
}

DiamondTrap::~DiamondTrap() {
    
}

void    DiamondTrap::whoAmI() {
    
}