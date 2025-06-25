/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:05:32 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/25 15:16:59 by taomalbe         ###   ########.fr       */
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

int detectType(std::string &conv) {
    long unsigned int lui = 1;
    if (conv.length() == lui)
    {
        if (std::isprint(conv[0]) && !std::isdigit(conv[0]))
            return (0);
    }
    if (conv[0] == '+' || conv[0] == '-' || std::isdigit(conv[0]))
    {
        long unsigned int i = 0;
        if (conv[0] == '+' || conv[0] == '-')
            i++;
        while (i < conv.length())
        {
            if (std::isdigit(conv[i]))
                i++;
            else
                break;
        }
        if (i == conv.length())
            return (1);
    }
    std::istringstream ss(conv);
    if (ss.fail())
    {
        std::cout << "Convertion does not make any sense" << std::endl;
        return (-1);
    }
    if ((conv[conv.length() - 1] == 'f' && conv.find('.') != std::string::npos)
        || conv == "nanf" || conv == "+inff" || conv == "-inff")
        return (2);
    if ((conv[conv.length() - 1] != 'f' && conv.find('.') != std::string::npos)
        || conv == "nan" || conv == "+inf" || conv == "-inf")
        return (3);
    return (-1);
}

void ScalarConverter::convert(std::string conv) {
    int     err = 0;
    char    c;
    int     i;
    float   f;
    double  d;
    int     type = detectType(conv);
    std::istringstream ss(conv);
    switch (type)
    {
        case 0 : {
            c = conv[0];
            i = static_cast<int>(c);
            f = static_cast<float>(c);
            d = static_cast<double>(c);
            break;
        }
        case 1 : {
            ss >> i;
            c = static_cast<char>(i);
            f = static_cast<float>(i);
            d = static_cast<double>(i);
            break;
        }
        case 2 : {
            ss >> f;
            c = static_cast<char>(f);
            i = static_cast<int>(f);
            d = static_cast<double>(f);
            break;
        }
        case 3 : {
            ss >> d;
            c = static_cast<char>(d);
            i = static_cast<int>(d);
            f = static_cast<float>(d);
            break;
        }
        default: {
            std::cout << "Invalid convertion" << std::endl;
            return;
        }
    }
    if (conv == "nan" || conv == "nanf")
        err = 1;
    else if (conv == "-inf" || conv == "-inff")
        err = 2;
    else if (conv == "+inf" || conv == "+inff")
        err = 3;
    if (std::isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else if (err)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (err || i >= INT_MAX || i <= INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (err == 1)
    {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (err == 2)
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if (err == 3)
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (f / i > 1)
    {
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
    else
    {
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
}
