/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:11:15 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/03 11:26:45 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int main(int ac, char *av[])
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (av[++i])
		{
			j = 0;
			while (av[i][j])
				std::cout << (unsigned char)std::toupper(av[i][j++]);
		}
		std::cout << std::endl;
	}
	return (0);
}
