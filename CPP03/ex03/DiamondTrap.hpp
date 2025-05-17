/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:31:07 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/17 09:26:01 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string dname);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator=(const DiamondTrap& copy);
        ~DiamondTrap();
        void    whoAmI();
};