/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:40:09 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/04 11:48:31 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    void Infos(std::string fname, std::string lname, std::string nname,
        std::string pnumber, std::string dsecret) {
            first_name = fname;
            last_name = lname;
            nickname = nname;
            phone_number = pnumber;
            darkest_secret = dsecret;
        }
};

#endif