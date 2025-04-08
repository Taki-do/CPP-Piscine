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
#include <cstdio>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:8" << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits()
        << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ) {
    _accountIndex = getNbAccounts();
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"
        << std::endl;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"
        << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    _nbDeposits = 1;
    _totalNbDeposits += _nbDeposits;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"
        << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (_amount - withdrawal < 0)
    {
        _nbWithdrawals = 0;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
            << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _nbWithdrawals = 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
        << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal
        << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += _nbWithdrawals;
    return (true);
}

int		Account::checkAmount( void ) const {
    _displayTimestamp();
    std::cout << "checkAmount" << std::endl;
    return (1);
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
    << _nbDeposits << ";withdrawals:"<< _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer[80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(buffer,80,"[%Y%m%d_%H%M%S] ",timeinfo);
    std::cout << buffer;
}
