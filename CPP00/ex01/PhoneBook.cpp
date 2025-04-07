/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:05:12 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/07 11:05:12 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    print(Contact& contact) {
    if (!contact.first_name.empty() && !contact.last_name.empty() && !contact.nickname.empty()
            && !contact.phone_number.empty() && !contact.darkest_secret.empty()) {
            std::cout << "first name = " << contact.first_name << std::endl;
            std::cout << "last_name = " << contact.last_name << std::endl;
            std::cout << "nickname = " << contact.nickname << std::endl;
            std::cout << "phone_number = " << contact.phone_number << std::endl;
            std::cout << "darkest_secret = " << contact.darkest_secret << std::endl;         
    }
    else
        std::cout << "This index is incorrect" << std::endl;
}

void    printSearch(PhoneBook& phonebook) {
    for (int i = 0; i < 8; i++)
        phonebook.contacts[i].printLine(i);
}

void    printContact(PhoneBook& phonebook, int i) {
    print(phonebook.contacts[i]);
}

void    AddContact( PhoneBook& phonebook, std::string fname, std::string lname, std::string nname,
    std::string pnumber, std::string dsecret) {
        if (phonebook.compteur < 8)
            phonebook.contacts[phonebook.compteur++] = Contact(fname, lname, nname, pnumber, dsecret);
        else
        {
            phonebook.compteur = 0;
            phonebook.contacts[phonebook.compteur++] = Contact(fname, lname, nname, pnumber, dsecret);
        }
}

std::string truncate(std::string str) {
    if (str.length() > 10)
    {
        return (str.substr(0, 9) + ".");
    }
    else
        return (str);
}

int main() {
    int         index;
    std::string input;
    std::string fname;
    std::string lname;
    std::string nname;
    std::string pnumber;
    std::string dsecret;
    PhoneBook   phonebook;

    while (1)
    {
        std::getline (std::cin, input);
        if (input == "ADD")
        {
            std::cout << "first name : ";
            std::getline (std::cin, fname);
            std::cout << "last name : ";
            std::getline (std::cin, lname);
            std::cout << "nickname : ";
            std::getline (std::cin, nname);
            std::cout << "phone number : ";
            std::getline (std::cin, pnumber);
            std::cout << "darkest secret : ";
            std::getline (std::cin, dsecret);

            if (!fname.empty() && !lname.empty() && !nname.empty()
                && !pnumber.empty() && !dsecret.empty()) {
                    AddContact(phonebook, fname, lname, nname, pnumber, dsecret);
                }
        }
        else if (input == "SEARCH")
        {
            std::cout << std::left;
            std::cout << std::setw(10) << "index" << "|"
                      << std::setw(10) << "first name" << "|"
                      << std::setw(10) << "last name" << "|"
                      << std::setw(10) << "nickname" << "|"
                      << std::endl;

            std::cout << std::right;
            printSearch(phonebook);
            std::cout << std::left;
            std::cout << "Enter index number to show : ";
            std::cin >> index;
            if (std::cin.fail())
            {
                std::cout << "Invalid number, please enter a number" << std::endl;
                std::cin.clear();
            }
            else if (index < 0 || index > 7)
                std::cout << "Index must be form 0 to 7" << std::endl;
            else
                printContact(phonebook, index);

        }
        else if (input == "EXIT")
            break ;
    }

    //phonebook.AddContact("jean", "pagnan", "jeje", "0767871027", "batard");
    //phonebook.printContact();
}
