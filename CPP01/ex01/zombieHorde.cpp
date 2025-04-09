/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:16:37 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/09 12:16:37 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie* Horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        Horde[i].setName(name);
        Horde[i].announce();
    }
    return (Horde);
}