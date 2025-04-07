/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:40:09 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/07 16:58:15 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

std::string truncate(std::string str);

class Contact {
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    Contact() {
        first_name = "";
        last_name = "";
        nickname = "";
        phone_number = "";
        darkest_secret = "";
    }

    Contact(std::string fname, std::string lname, std::string nname,
        std::string pnumber, std::string dsecret) {
            first_name = fname;
            last_name = lname;
            nickname = nname;
            phone_number = pnumber;
            darkest_secret = dsecret;
        }

    void    printLine(int i) {
        if (!first_name.empty() && !last_name.empty() && !nickname.empty()
                && !phone_number.empty() && !darkest_secret.empty())
        {
            std::cout << std::setw(10) << i << "|"
                      << std::setw(10) << truncate(first_name) << "|"
                      << std::setw(10) << truncate(last_name) << "|"
                      << std::setw(10) << truncate(nickname) << "|"
                      << std::endl;
        }
    }
};

#endif