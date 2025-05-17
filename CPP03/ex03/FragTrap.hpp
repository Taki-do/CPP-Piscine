/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:56:09 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/17 09:26:02 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string str);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(const FragTrap& copy);
        ~FragTrap();
        void    highFivesGuys(void);
};