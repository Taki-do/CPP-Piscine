/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:13:03 by taomalbe          #+#    #+#             */
/*   Updated: 2025/06/03 10:17:18 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char *av[]) {
    //ScalarConverter S; //crash
    if (ac == 1)
    {
        std::cout << "convert 0 :" << std::endl;
        ScalarConverter::convert("0");
        std::cout << std::endl << "convert nan :" << std::endl;
        ScalarConverter::convert("nan");
        std::cout << std::endl << "convert 42.0f :" << std::endl;
        ScalarConverter::convert("42.0f");
        std::cout << std::endl << "convert oue :" << std::endl;
        ScalarConverter::convert("oue");
    }
    if (ac == 2)
    {
        std::string s = std::string(av[1]);
        ScalarConverter::convert(s);
    }
}