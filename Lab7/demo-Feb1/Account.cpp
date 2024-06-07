#include "Account.h"

void Account::setBalance(int value)
{
	balance = value;
}

bool Account::withdraw(int amount)
{
	if (amount < balance + overdraft) {
		balance = balance - amount;
		return true;
	}
	else {
		return false;
	}
}

int Account::getAcountNumber()
{
	return accountNumber;
}
int Account::getBalance()
{
	return balance;
}

void Account::deposit(int amount) {
	balance = balance + amount;
}
