#pragma once
class Account
{
public:
	Account() {

	}
	Account(int accNum) :
		accountNumber{ accNum },
		balance{ 0 },
		overdraft{ 50 }

	{
	}
	Account(int accNum, int balValue) :
		accountNumber{ accNum },
		balance{ balValue },
		overdraft{ 50 }
	{
	}
	Account(int accNum, int balValue, int overdraftVal) :
		accountNumber{ accNum },
		balance{ balValue },
		overdraft{ overdraftVal }
	{

	}
	void setBalance(int value);
	void deposit(int amount);
	bool withdraw(int amount);
	int getBalance();
	int getAcountNumber();

private:
	int accountNumber;
	int balance;
	int overdraft;
};