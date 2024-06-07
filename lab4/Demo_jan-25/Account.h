#pragma once
#include <iostream>
using namespace std;

class Person {
public:
	Person()
	{

	}
	Person(int id, int phonenumber) :
		personId(id),
		phone(phonenumber) {

	}
	int get_id() {
		return personId;
	}
	int get_phone() {
		return phone;
	}
private:
	int personId;
	int phone;
};

class Account
{
public:
	Account() {

	}

	Account(int accNum) :
		accountNumber{ accNum },
		balance{ 0 },
		overdraft{50}
		
	{
		std::cout << "Constructor 1 is called" << endl;
	}
	Account(int accNum, int balValue) :
		accountNumber{ accNum },
		balance{ balValue },
		overdraft{50}
	{
		std::cout << "Constructor 2 is called" << endl;
	}
	Account(int accNum, int balValue, int overdraftVal) :
		accountNumber{ accNum },
		balance{ balValue },
		overdraft{ overdraftVal }
	{

	}
	Account(int accNum, int balValue, int overdraftVal, Person accH) :
		accountNumber{ accNum },
		balance{ balValue },
		overdraft{ overdraftVal },
		accHolder{accH}
	{

	}

	void setBalance(int value)
	{
		balance = value;
	}
	void deposit(int amount) {
		balance = balance + amount;
	}

	bool withdraw(int amount)
	{
		if (amount < balance + overdraft) {
			balance = balance - amount;
			return true;
		}
		else {
			return false;
		}
	}
	Person getAccountHolder()
	{
		return accHolder;
	}
	int getBalance()
	{
		return balance;
	}

private:
	int accountNumber;
	int balance;
	int overdraft;
	Person accHolder;
	//int test;
};

