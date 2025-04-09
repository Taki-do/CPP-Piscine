/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:42:19 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/09 17:42:19 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Address of str       : " << &str << std::endl;
    std::cout << "Address of stringPTR : " << &stringPTR << std::endl;
    std::cout << "Address of stringREF : " << &stringREF << std::endl << std::endl;

    std::cout << "Value of str       : " << str << std::endl;
    std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value of stringREF : " << stringREF << std::endl;
}