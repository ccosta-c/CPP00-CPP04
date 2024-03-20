// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : Fri Feb 16 13:56:17 2024                      //
//                Last update : Fri Feb 16 13:56:17 2024                      //
//                Made by : Claudio "Hacker" Costa <cc@gbu.com>               //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
    time_t  now = time(0);
	tm      time_data = *localtime(&now);

	std::cout << "[" << time_data.tm_year + 1900 << std::setw(2) << std::setfill('0') << time_data.tm_mon + 1
	<< std::setw(2) << std::setfill('0') << time_data.tm_mday << "_" << std::setw(2) << std::setfill('0')
	<< time_data.tm_hour << std::setw(2) << std::setfill('0') << time_data.tm_min << std::setw(2) << std::setfill('0')
	<< time_data.tm_sec << "] ";
}


Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created\n";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << (_nbAccounts+ 1) << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void    Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:"
	<< _nbWithdrawals << "\n";
}

void Account::makeDeposit(int deposit)
{
	int temp = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << temp << ";deposit:" << deposit << ";amount:"
	<< _amount << ";nb_deposits:" << _nbDeposits << "\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return(false);
	}
	else
	{
		int temp = _amount;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << temp << ";withdrawal:" << withdrawal << ";amount:"
		<< _amount << ";nb_deposits:" << _nbWithdrawals<< "\n";
		return(true);
	}
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}
