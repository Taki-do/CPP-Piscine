/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:43:51 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/08 09:31:13 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy) {
	if (this != &copy) {
		m = copy.m;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

int		BitcoinExchange::setMap() {
	std::ifstream 	csv;
	std::string		line;
	float			value;
	
	csv.open("data.csv");
	if (!csv) {
		std::cerr << "Error while opening file" << std::endl;
		return (0);
	}
	getline(csv, line);
	while (getline(csv, line)) {
		std::string date = line.substr(0, 10);
		std::istringstream	svalue(line.substr(11, line.size()));
		svalue >> value;
		m[date] = value;
	}
	return (1);
}

float BitcoinExchange::getMap(std::map<std::string, float>::iterator it) {
	return (m[it->first]);
}

std::map<std::string, float>::iterator BitcoinExchange::getIterator(std::string date) {
	return (m.lower_bound(date));
}

std::map<std::string, float>::iterator BitcoinExchange::getMapBegin() {
	return (m.begin());
}

std::map<std::string, float>::iterator BitcoinExchange::getMapEnd() {
	return (m.end());
}