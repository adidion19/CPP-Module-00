/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 14:51:09 by adidion           #+#    #+#             */
/*   Updated: 2022/01/02 16:44:54 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

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
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();
	Account::_accountIndex = Account::_nbAccounts++;
	std::cout << "index:" << Account::_accountIndex << ";amount";
	
	return ;
}

Account::~Account( void )
{
	;
}


int main()
{
	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );

	return (0);
}