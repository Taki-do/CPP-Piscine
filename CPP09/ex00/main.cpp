/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:15:42 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/06 17:24:11 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int	check_format(std::string line) {
	int	i = 0;
	
	if (line.size() != 10)
		return (0);
	while (i < 4) {
		if (!isdigit(line[i++]))
			return (0);
	}
	if (line[4] != '-' || line[7] != '-')
		return (0);
	i++;
	while (i < 7) {
		if (!isdigit(line[i++]))
			return (0);
	}
	i++;
	while (i < 10) {
		if (!isdigit(line[i++]))
			return (0);
	}
	return (1);
	
}

int	main(int ac, char *av[]) {
	std::ifstream 	csv;
	std::string		line;

	(void)ac;
	csv.open(av[1]);
	if (!csv) {
		std::cerr << "Error while opening file" << std::endl;
		return (1);
	}
	while (getline(csv, line)) {
		if (line.find("|") == std::string::npos)
			std::cerr << "Line is not DATE | VALUE format." << std::endl;
		if (!check_format(line))
			std::cerr << "Invalid date" << std::endl;
	}
}