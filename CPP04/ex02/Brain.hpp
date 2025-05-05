/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:44:47 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/05 15:01:10 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);
		~Brain();
};