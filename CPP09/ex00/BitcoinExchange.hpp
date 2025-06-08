/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 09:03:49 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/08 09:30:48 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <limits.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> m;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);
		~BitcoinExchange();
		int		setMap();
		float	getMap(std::map<std::string, float>::iterator it);
		std::map<std::string, float>::iterator getIterator(std::string date);
		std::map<std::string, float>::iterator getMapBegin();
		std::map<std::string, float>::iterator getMapEnd();
};

#endif