/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:00:09 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/26 15:00:09 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>

class ScalarConverter {
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator=(const ScalarConverter& copy);
        ~ScalarConverter();
        static void convert(std::string conv);
};

#endif