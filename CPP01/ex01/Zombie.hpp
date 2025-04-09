/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:15:23 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/09 12:15:23 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string z_name);
        void setName(std::string z_name);
        void announce( void );
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );