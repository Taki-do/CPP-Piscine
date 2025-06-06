/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:54:05 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/17 09:26:03 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {
    std::cout << "[ClapTrap]" << std::endl;
    ClapTrap one("one");
    ClapTrap two("two");

    one.attack("two");
    two.takeDamage(0);
    two.attack("one");
    one.takeDamage(0);
    two.beRepaired(0);
    one.beRepaired(0);

    std::cout << std::endl << "[ScavTrap]" << std::endl;
    ScavTrap first("scav");

    first.attack("one");
    first.guardGate();

    std::cout << std::endl << "[FragTrap]" << std::endl;
    FragTrap frag("frag");
    frag.highFivesGuys();

    std::cout << std::endl << "[DiamondTrap]" << std::endl;
    DiamondTrap Diamond("Bebou");
    Diamond.whoAmI();
    Diamond.attack("imaginary ennemy");

    std::cout << std::endl << "[Destructor]" << std::endl;
}