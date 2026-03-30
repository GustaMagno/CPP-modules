#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "Account.hpp"

int	Account::getNbAccounts( void ){return (_nbAccounts); }

int	Account::getTotalAmount( void ){return (_totalAmount); }

int	Account::getNbDeposits( void ){return (_totalNbDeposits); }

int	Account::getNbWithdrawals( void ){return (_totalNbWithdrawals); }

int		Account::checkAmount( void ) const{return (_amount); }

void	Account::displayAccountsInfos(void)
{
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
    << ";deposits:" << _totalNbDeposits << "withdrawals" << _totalNbWithdrawals;
}

void	Account::displayStatus(void) const
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
    << ";deposits:" << _nbDeposits << "withdrawals" << _nbWithdrawals;
}


void    Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _amount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
    << ";deposits:" << _nbDeposits << "withdrawals" << _nbWithdrawals;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
    << ";deposits:" << _nbDeposits << "withdrawals" << _nbWithdrawals;
}

Account::Account(int initial_deposit)
    :_amount(initial_deposit), _accountIndex(_nbAccounts)
{
    _nbAccounts++;
    _totalAmount += _amount;
}

Account::~Account(void)
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed";
}

void	Account::_displayTimestamp(void)
{
    std::time_t sec = std::time(0);
    std::tm* t = std::localtime(&sec);
    char    buffer[20];

    std::strftime(buffer, 20, "[%Y%m%d_%H%M%S]", t);
    std::cout << buffer;
}
