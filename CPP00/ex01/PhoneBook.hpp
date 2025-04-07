/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:33:37 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/07 12:33:37 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int     compteur;
public:
    PhoneBook() {
        compteur = 0;
    }

    void    AddContact(std::string fname, std::string lname, std::string nname,
        std::string pnumber, std::string dsecret);

    void    printContact(int i);

    void    printSearch();
};

#endif