#include "Branch.h"
#include <iostream>
using namespace std;

void Branch::addAccount(Account acc)
{
	accounts.push_back(acc);
}
void Branch::showAccounts()
{
	for (auto acc : accounts) {
		cout << acc.getAcountNumber() << " balance "
			<< acc.getBalance();
	}
}

void Branch::showAvgBalance()
{
	int total = 0;
	for (auto acc : accounts) {
		total += acc.getBalance();
	}
	cout << "Avg balance " << (total * 1.0) / accounts.size();
}
