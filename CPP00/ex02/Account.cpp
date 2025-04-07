/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:35:06 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/07 17:35:06 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>

int	Account::getNbAccounts( void ) {

}

int	Account::getTotalAmount( void ) {

}

int	Account::getNbDeposits( void ) {

}

int	Account::getNbWithdrawals( void ) {

}
//first one
void	Account::displayAccountsInfos( void ) {
    int i;

    i = 0;
    while (i < 8)
    {
        std::cout << "index:" << i << ";amount:" << "42" << ";created" << std::endl;
    }
}

Account::Account( int initial_deposit ) {

}

Account::~Account( void ) {

}

void	Account::makeDeposit( int deposit ) {

}

bool	Account::makeWithdrawal( int withdrawal ) {

}

int		Account::checkAmount( void ) const {

}

void	Account::displayStatus( void ) const {

}

void	Account::_displayTimestamp( void ) {
    
}