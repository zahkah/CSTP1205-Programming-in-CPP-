// demo-Jan-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>
#include "utilities.h"



using namespace std;


/*
template<class T, class S>
T myMax2(T x, T y)
{
    T max;
    if (x > y) {
        max = x;
    }
    else {
        max = y;
    }
    return max;
}
*/



// example for default argument
 void updateSalary(int& salary, int bonus=10)
 {
     salary = salary + bonus;
     cout << "In updateSalary: " << salary << endl;
 }

void printNumbers(std::vector<int> myVec)
{
    for (auto v : myVec) {
        cout << v << " ";
    }

}
void inputNumbers(std::vector<int>& myVec, int number)
{
    for (int i = 0; i < number; i++)
    {
        int number{ 0 };
        cin >> number;
        myVec.push_back(number);
    }
}

int main()
{
    std::array<std::array<int, 3>, 3> myMat{{ 
                                             {10, 20, 30},
                                             { 30, 40, 50 },
                                             { 60, 70, 80}  
                                            }};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << myMat[i][j] << " ";
        }
        cout << endl;
    }
    myMax3(10, 20);
    int out = myMax2(10, 30);

}


// definition of a function

