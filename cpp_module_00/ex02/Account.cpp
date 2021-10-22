#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_displayTimestamp();
	_accountIndex = Account::_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	++Account::_nbAccounts;
	Account::_totalAmount += _amount;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created:" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
				<< ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" 
				<< Account::_totalAmount
				<< ";deposits:"
				<< Account::_totalNbDeposits
				<< ";withdrawals:"
				<< Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	int	p_amount = _amount;

	++_nbDeposits;
	_amount += deposit;	
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
				<< ";deposite:" << _nbDeposits << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	int	p_amount = _amount;
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";withrawal:refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_amount -= withdrawal;
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now = time(NULL);
	tm		*time_now = localtime(&now);

	std::cout << "["
		<< time_now->tm_year + 1900
		<< time_now->tm_mon + 1
		<< time_now->tm_mday << "_"
		<< time_now->tm_hour
		<< time_now->tm_min
		<< time_now->tm_sec
		<< "]";
}