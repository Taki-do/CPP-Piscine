/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:19:11 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/09 11:19:11 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void randomChump( std::string name );

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string z_name);
        void announce( void );
        ~Zombie();
};

Zombie* newZombie( std::string name );