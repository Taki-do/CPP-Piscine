/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:54:56 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/30 14:22:05 by taomalbe         ###   ########.fr       */
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
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
    std::cout << "Operator assignement FragTrap has been called" << std::endl;
    if (this != &copy)
    {
        this->name = copy.name;
        this->hit_points = copy.hit_points;
        this->energy_points = copy.energy_points;
        this->attack_damage = copy.attack_damage;
    }
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " has been expulsed far far away in the galaxy.. (destructor)" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Hey Guys ! I have no idea for this sentence :)" << std::endl;
}