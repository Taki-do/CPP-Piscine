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

Contact::Contact() {
    first_name = "";
    last_name = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

Contact::Contact(std::string fname, std::string lname, std::string nname,
    std::string pnumber, std::string dsecret) {
    first_name = fname;
    last_name = lname;
    nickname = nname;
    phone_number = pnumber;
    darkest_secret = dsecret;
}

std::string truncate(std::string str) {
    if (str.length() > 10)
    {
        return (str.substr(0, 9) + ".");
    }
    else
        return (str);
}

void    Contact::printLine(int i) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(first_name) << "|"
                  << std::setw(10) << truncate(last_name) << "|"
                  << std::setw(10) << truncate(nickname) << "|"
                  << std::endl;
}

void    Contact::print() {
    if (!first_name.empty() && !last_name.empty() && !nickname.empty()
            && !phone_number.empty() && !darkest_secret.empty()) {
                std::cout << "first name = " << first_name << std::endl;
                std::cout << "last_name = " << last_name << std::endl;
                std::cout << "nickname = " << nickname << std::endl;
                std::cout << "phone_number = " << phone_number << std::endl;
                std::cout << "darkest_secret = " << darkest_secret << std::endl;
    }
    else
        std::cout << "This is not a valid index" << std::endl;
}

void    PhoneBook::printSearch() {
    for (int i = 0; i < 8; i++)
        contacts[i].printLine(i);
}

void    PhoneBook::printContact(int i) {
        contacts[i].print();
}

void    PhoneBook::AddContact(std::string fname, std::string lname, std::string nname,
    std::string pnumber, std::string dsecret) {
        if (compteur < 8)
            contacts[compteur++] = Contact(fname, lname, nname, pnumber, dsecret);
        else
        {
            compteur = 0;
            contacts[compteur++] = Contact(fname, lname, nname, pnumber, dsecret);
        }
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
                    phonebook.AddContact(fname, lname, nname, pnumber, dsecret);
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
            phonebook.printSearch();
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
                phonebook.printContact(index);

        }
        else if (input == "EXIT")
            break ;
    }
}
