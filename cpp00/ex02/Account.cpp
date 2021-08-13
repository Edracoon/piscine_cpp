#include <iostream>
#include <time.h>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	initial_deposit = 0;
	std::cout << "Account contructor" << std::endl;
}

Account::~Account(void)
{
	std::cout << "Account destructor" << std::endl;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	std::time_t		time;
	struct tm		*local;

	time = std::time(&time);
	local = localtime(&time);

	std::cout << "[" << local->tm_year << "." <<
	local->tm_mon << "." << local->tm_mday << "_" <<
	local->tm_hour << "." << local->tm_min << "." << local->tm_sec << "]";
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << 
	"accounts:" << getNbAccounts() << ";" <<
	"total:" << getTotalAmount() << ";" <<
	"deposits:" << getNbDeposits() << ";" << 
	"withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}

// int Account::getNbAccounts()
// {
// 	return (_nbAccounts);
// }
