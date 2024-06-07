// Week-1-demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>


using namespace std;
int myMax(int x, int y);

template<class T>
T myMin(T val1, T val2)
{
	T min;
	if (val1 > val2)
		min = val1;
	else
		min = val2;
	return min;
}

void updateSalary(int& salary, int bonus = 1)
{
	salary = salary + bonus;
}

int sumNumbers(std::vector<int>& numbers)
{
	int result = 0;
	for (auto val : numbers) {
		result = result + val;
	}
	return result;
}

double averageNumbers(std::vector<int>& numbers)
{
	if (numbers.size() == 0) {
		return 0.0;
	}
	int result = 0;
	for (auto val : numbers) {
		result = result + val;
	}
	return static_cast<double>(result) / numbers.size();
}


template<class T>
void inputNumbers(std::vector<T>& numbers, int n)
{
	for (int i = 0; i < n; i++) {
		T number{ 0 };
		cin >> number;
		numbers.push_back(number);
	}
}

void squareNumbers(std::vector<int>& numbers)
{
	for (auto& v : numbers) {
		v = v * v;
	}
}

void printNumbers(std::vector<int>& numbers)
{
	for (auto v : numbers) {
		cout << v << " ";
	}
}

void printNumbers(std::vector<float>& numbers)
{
	for (auto v : numbers) {
		cout << v << " ";
	}
}

template<class T>
void printNumbers(std::vector<T>& numbers)
{
	for (auto v : numbers) {
		cout << v << " ";
	}
}


std::vector<float>  calculatePrices(std::vector<float> prices, float shipping=1.0, float tax=0.1)
{
	std::vector<float> totalPrices{};
	for (auto v : prices) {
		totalPrices.push_back(v + shipping + v * tax);
	}
	return totalPrices;
}

int main()
{
	std::array<int, 3> myArray{};
	int sum = 0;
	for (auto& val : myArray) {
		sum += val;
	}
	//auto result1 = myMax2(10, 11);
	auto result2 = myMax2(10.0, 10.2);
	cout << result1 << " " << result2 << endl;

	cout << sum << endl;
	int result = myMax(8, 9);
	cout << result << endl;
	updateSalary(result, 1);
	cout << result;
	std::vector<int> myNumbers{ };
	inputNumbers(myNumbers, 3);
	squareNumbers(myNumbers);
	printNumbers(myNumbers);
	std::vector<float> prices{};
	inputNumbers(prices, 3);
	printNumbers(prices);
	std::vector<float> totalPrices = calculatePrices(prices, 0.5, 0.2);
	printNumbers(totalPrices);


	std::array<int, 5> row{ 1, 2, 3 };

	for (int i = 0; i < 5; i++) {
		int number{ 0 };
		cin >> number;
		row[i] = number;
		cout << "entered " << row[i] << endl;
	}
	std::array< std::array<int, 5>, 5> myMatrix{ };
	
	



}	


int myMax(int x, int y)
{
	return x > y ? x : y;
}


