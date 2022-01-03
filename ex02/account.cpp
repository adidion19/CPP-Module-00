/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 14:51:09 by adidion           #+#    #+#             */
/*   Updated: 2022/01/03 11:21:00 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900);
	if ((now->tm_mon + 1) < 10)
		std::cout << "0" << (now->tm_mon + 1);
	else
		std::cout << (now->tm_mon + 1);
	if ((now->tm_mday) < 10)
		std::cout << "0";
	std::cout <<  now->tm_mday << "_";
	if ((now->tm_hour) < 10)
		std::cout << "0";
	std::cout << now->tm_hour;
	if ((now->tm_min) < 10)
		std::cout << "0";
	std::cout << now->tm_min;
	if ((now->tm_sec) < 10)
		std::cout << "0";
	std::cout << now->tm_sec << "] ";
	return ;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:"
	<< _amount << ";created" << std::endl;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
	<< _amount << ";closed" << std::endl;
	return ;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:"
	<< _totalAmount << ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
	<< _amount << ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit
	<< ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount;
	if (_amount - withdrawal >= 0)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawal:" << _nbWithdrawals << std::endl;
		return (1);
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
}
