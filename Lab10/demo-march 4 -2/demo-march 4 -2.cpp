// demo-march 4 -2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include "Employee.h"
#include <memory>
#include "Date.h"

using namespace std;

/*
int add(int a, int b)
{
	return a + b;
}
*/

class Item
{
public:
	Item(int idIn, string nameIn, double priceIn) :
		id(idIn),
		name(nameIn),
		price(priceIn) {}
	int getId()
	{
		return id;
	}
	double getPrice()
	{
		return price;
	}
	string getName()
	{
		return name;
	}
private:
	int id;
	string name;
	double price;
};



int main()
{
	//int x = 10;
	auto myadd = [](int a, int b) { return a + b; };


	// Solution 2a
	cout << "Solution 2a :\n";
	auto cmp = [](int a, int b) { return a == b; };
	std::cout << cmp(20, 30) << endl;

	// Solution 2b
	cout << "\nSolution 2b :\n";
	vector<int> numbers{ 1,11,2,13, 4, 8 };
	for_each(numbers.begin(), numbers.end(), [](int a) {
		if (a > 10) {
			cout << a * a << endl;
		}
		});

	// Solution 2c
	cout << "\nSolution 2c :\n";
	shared_ptr<Item> item1 = make_shared<Item>(1, "tv", 500);
	shared_ptr<Item> item2 = make_shared<Item>(2, "phone", 800);
	shared_ptr<Item> item3 = make_shared<Item>(3, "watch", 50);

	vector<shared_ptr<Item>> items{ item1,item2, item3 };
	auto itemCount = count_if(items.begin(), items.end(), [](auto item) {
		return item->getPrice() > 100;
		});

	cout << "Items with price price than 100: " << itemCount << endl;


	// Solution 2d
	Date d1{ 10,10,2020 };
	Date d2{ 1,1,2020 };
	Date d3{ 1,1,2022 };
	Date d4{ 1,3,2021 };

	vector<Date> dates{ d1, d2, d3, d4 };
	sort(dates.begin(), dates.end(), [](auto d1, auto d2) {
		return d1 < d2;
	});

	for_each(dates.begin(), dates.end(), [](auto d) {
		d.print();
		});
	/*
	
	//cout << add(10,20);
	//auto print = [](int a) { cout << a << endl; };

	vector<int> myVec{ 10,31, 21, 100, 51, 10 };
	//for (auto v : myVec) {
	//	cout << v << endl;
	//}
	//for_each(myVec.begin(), myVec.end(), print);
	//for_each(myVec.begin(), myVec.end(), [](int a) 
	//	{ cout << a << endl; });


	int c = count_if(myVec.begin(), myVec.end(), [](int a) 
		{ return a % 2 == 0; });
	cout << c << endl;
	
	shared_ptr<Employee> emp1 = make_shared<Employee>("aaa", 200);
	shared_ptr<Employee> emp2 = make_shared<Employee>("bbb", 500);
	shared_ptr<Employee> emp3 = make_shared<Employee>("ccc", 300);

	vector<shared_ptr<Employee>> emps = { emp1, emp2, emp3 };
	//it =find(v.begin(), v.end(), 1);
	
	auto it = find_if(emps.begin(), emps.end(), [](auto e) { return e->getSalary() > 200; });
	cout << "Name = " << (*it)->getName() << " " << "Salary =  " << (*it)->getSalary() << endl;

	//sort(v.begin(), v.end());
	

	sort(emps.begin(), emps.end(), [](auto emp1, auto emp2) {
		return emp1 <  emp2;
		//return emp1->getSalary() < emp2->getSalary();
		});


	for_each(emps.begin(), emps.end(), [](auto emp) 
		{ cout << emp->getName() << " " << emp->getSalary() << endl; }
	);


	*/


}
