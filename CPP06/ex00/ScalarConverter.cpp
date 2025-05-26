/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:05:32 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/26 15:05:32 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
    *this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) {
    (void)copy;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string conv) {
    /*
    try {
        
    }
    catch {

    }
    */
    int  c;
    std::stringstream convchar(conv);
    convchar >> c;
    std::cout << "Char: " << c << std::endl;
}
