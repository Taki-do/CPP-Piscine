/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:54:05 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 16:59:50 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap one("one");
    ClapTrap two("two");

    one.attack("two");
    two.takeDamage(0);
    two.attack("one");
    one.takeDamage(0);
    two.beRepaired(0);
    one.beRepaired(0);
}