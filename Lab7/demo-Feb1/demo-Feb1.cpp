// demo-Feb1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Account.h"
#include "Branch.h"

using namespace std;
int main()
{
	vector<Account> myVec;
	int accId;
	int balance;
	Branch cibc{ 1, "CIBC" };
	for (int i = 0; i < 3; i++) {
		cout << "enter account id ";
		cin >> accId;
		cout << "enter account balance ";
		cin >> balance;

		Account acc{ accId, balance };
		cibc.addAccount(acc);
	}


	cibc.showAccounts();

	cibc.showAvgBalance();


}
	


