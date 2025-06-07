/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:15:42 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/07 18:02:39 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <sstream>
#include <limits.h>

int check_value(std::string line) {
	long unsigned int j = 0;
	if (line[0] == '-')
		j++;
	while (j < line.size()) {
		if (!isdigit(line[j]) && line[j] != '.')
			return (0);
		j++;
	}
	std::istringstream ss(line);
	float i;
	ss >> i;
	if (i >= INT_MAX || i <= INT_MIN) {
		std::cerr << "Error: too large a number.\n";
		return (0);
	}
	if (i < 0) {
		std::cerr << "Error: not a positive number.\n";
		return (0);
	}
	if (i > 1000) {
		std::cerr << "Error : number above 1000.\n";
		return (0);
	}
	return (1);
}

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
	float	value;
	std::ifstream 	csv;
	std::ifstream 	input;
	std::string		line;
	std::map <std::string, float> m;

	if (ac != 2) {
		std::cerr << "Error: Invalid number of arguments, usage : ./btc your_file" << std::endl;
		return (1);
	}
	csv.open("data.csv");
	if (!csv) {
		std::cerr << "Error while opening file" << std::endl;
		return (1);
	}
	getline(csv, line);
	while (getline(csv, line)) {
		if (line.find(",") == std::string::npos)
			std::cerr << "Line is not DATE | VALUE format." << std::endl;
		std::string date = line.substr(0, 10);
		std::istringstream	svalue(line.substr(11, line.size()));
		svalue >> value;
		m[date] = value;
	}
	input.open(av[1]);
	if (!input) {
		std::cerr << "Error while opening file" << std::endl;
		return (1);
	}
	getline(input, line);
	while (getline(input, line)) {
		std::string date = line.substr(0, 10);
		if (line.find(" | ") == std::string::npos) {
			std::cerr << "Error: bad input => " << date << std::endl;
			continue ;
		}
		if (!check_value(line.substr(13, line.size())))
			continue ;
		std::istringstream	svalue(line.substr(13, line.size()));
		if (svalue.fail()) {
			std::cerr << "Error : invalid format, correct format is \"date | value\"\n";
			continue ;
		}
		svalue >> value;
		std::map<std::string, float>::iterator it = m.lower_bound(date);
		if (it != m.end() && it->first == date)
			std::cout << date << " => " << value << " = "
					  << value * m[it->first] << std::endl;
		else if (it != m.begin()) {
			it--;
			std::cout << date << " => " << value << " = "
					  << value * m[it->first] << std::endl;
		}
		else {
			if (!check_format(date)) {
				std::cerr << "Error: invalid format !" << std::endl;
				continue ;
			}
			std::cerr << "Error: invalid date => " << date << std::endl;
			continue ;
		}
	}
	return (0);
}