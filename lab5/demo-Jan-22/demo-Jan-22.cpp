// demo-Jan-22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "utils.h"

using namespace std;

int factorial(int n)
{
	if (n == 1) {
		return 1;
	} 
	return n * factorial(n - 1);
}

int my_multiply(int x, int y)
{
	if (y == 1) {
		return x;
	}
	else {
		return x + my_multiply(x, y - 1);
	}
}


int sum_even(int n)
{
	if (n == 0) {
		return n;
	}
	if (n % 2 != 0) {
		return sum_even(n - 1);
	}
	return n + sum_even(n - 2);
}



void myfunc(int x)
{
	static int counter = 0;
	static int total_time = 0;
	int time1 = time(0);
	counter++;
	cout << x << endl;
	cout << "I am being called : " << counter << "th time" << endl;
	int time2 = time(0);
	total_time = time2 - time1 + total_time;
	cout << "function took " << total_time << " seconds" << endl;
	 

}

class Account {
public:
	Account(int number)
	{
		id = number;
	}
	

	int getId() {
		return id;
	}
private:
	int id;
};

int main()
{
	Account myAccount(100);
	cout << myAccount.getId();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
