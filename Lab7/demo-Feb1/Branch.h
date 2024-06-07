#pragma once
#include <string>
#include <vector>
#include "Account.h"

using namespace std;

class Branch {

public:
	Branch(int bracnchIdIn, string nameIn) :
		branchId(bracnchIdIn),
		branchName(nameIn) {

	}


	int getBranchId() {
		return branchId;
	}
	string getBranchName() {
		return branchName;
	}

	void addAccount(Account acc);
	void showAccounts();
	void showAvgBalance();
	//void showMaxBalance();

private:
	int branchId;
	string branchName;
	vector<Account> accounts;
};
