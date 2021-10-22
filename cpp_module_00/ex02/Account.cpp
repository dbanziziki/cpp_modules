#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	++Account::_nbAccounts;
	Account::_totalAmount += _amount;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created:" << std::endl;
}

Account::~Account(void)
{
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
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" 
				<< Account::_totalAmount
				<< ";deposits:"
				<< Account::_totalNbDeposits
				<< ";withdrawals:"
				<< Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = _amount;

	++_nbDeposits;
	_amount += deposit;	
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
				<< ";deposite:" << _nbDeposits << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return (false);
}

int	Account::checkAmount( void ) const
{
	return (1);
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp( void )
{
}