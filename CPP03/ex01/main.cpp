/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:54:05 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/30 12:17:28 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
    ClapTrap one("one");
    ClapTrap two("two");

    one.attack("two");
    two.takeDamage(0);
    two.attack("one");
    one.takeDamage(0);
    two.beRepaired(0);
    one.beRepaired(0);

    ScavTrap first("scav");

    first.attack("one");
    first.takeDamage(50);
    first.beRepaired(40);
    first.guardGate();
}