// Demo_jan-25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    std::string myRegistrationDate{ "2023/12/10" };
    std::string year = myRegistrationDate.substr(0, 4);
    int year_val = stoi(year);
    cout << year_val;
    
    for (auto v : myRegistrationDate) {
        cout << v;
    }

}