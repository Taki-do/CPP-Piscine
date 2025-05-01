/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:54:56 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/01 09:49:34 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "Default constructor for FragTrap has been called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str) {
    std::cout << "Constructor for FragTrap has been called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
    std::cout << "Copy for FragTrap has been called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
    std::cout << "Operator assignement FragTrap has been called" << std::endl;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " has been expulsed far far away in the galaxy.. (destructor)" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Hey Guys ! I have no idea for this sentence :)" << std::endl;
}

int FragTrap::getHitPoint(void) {
    return (hit_points);
}

int FragTrap::getEnergyPoint(void) {
    return (energy_points);
}

int FragTrap::getAttackDamage(void) {
    return (attack_damage);
}