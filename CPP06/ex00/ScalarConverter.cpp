/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:05:32 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/28 11:47:20 by taomalbe         ###   ########.fr       */
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
    double  d;
    int     i;
    if (conv.lenght() == 1)
    {
        if (std::isprint(conv[0]) && !std::isdigit[0])
            return (0); //char
    }
    if (conv[0] == '+' || conv[0] == '-')
    {
        int i = 0;
        while (i < conv.lenght())
        {
            if (std::isdigit(conv[i]))
                i++;
            else
                break;
        }
        if (i == conv.lenght())
            return (1); //int
    }
    std::istringstream ss(conv);
    if (ss.fail())
    {
        std::cout << "Convertion does not make any sense" << std::endl;
        return (-1);
    }
    if ((conv.back() == 'f' && conv.find('.') != std::string::npos)
        || conv == "nanf" || conv == "inff" || conv == "-inff")
        return (2); //c'est un float
    if ((conv.back() != 'f' && conv.find('.') != std::string::npos)
        || conv == "nan" || conv == "inf" || conv == "-inf")
        return (3); //c'est un double
}

void ScalarConverter::convert(std::string &conv) {
    int     err = 0;
    char    c;
    int     i;
    float   f;
    double  d;
    std::istringstream ss(conv);
    ss >> d;
    if (conv == "nan" || conv == "nanf")
        err = 1;
    else if (conv == "-inf" || conv == "-inff")
        err = 2;
    else if (conv == "inf" || conv == "inff")
        err = 3;
    else if (ss.fail())
    {
        std::cout << "Convertion does not make any sense" << std::endl;
        return ;
    }
    f = static_cast<float>(d);
    i = static_cast<int>(d);
    c = static_cast<char>(i);
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
        std::cout << "float: negative infinity" << std::endl;
        std::cout << "double: negative infinity" << std::endl;
    }
    else if (err == 3)
    {
        std::cout << "float: infinity" << std::endl;
        std::cout << "double: infinity" << std::endl;
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
