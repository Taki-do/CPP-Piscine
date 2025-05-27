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

static int ft_stoi(std::string &s)
{
    int i;

    std::istringstream(s) >> i;
    return (i);
}

void ScalarConverter::convert(std::string &conv) {
    float value;
    if (conv == "nan" || conv == "nanf")
        value = std::nanf("");
    
    int val = static_cast<int>(ft_stoi(conv));
    char c = static_cast<char>(val);
    if (std::isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << val << std::endl;
}
