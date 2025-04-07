/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:40:09 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/07 17:21:00 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
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

    void    print();

    void    printLine(int i);
};

#endif