// demo-mar-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"

using namespace std;

class Time {
public:
    Time(int hIn, int mIn) :
        hour(hIn),
        minute(mIn) {}
    bool operator < (int val)
    {
        if (this->hour < val) {
            return true;
        }
        else {
            return false;
        }
    }
    bool operator < (Time& other) {
        if (this->hour < other.hour) {
            return true;
        }
        else if (this->hour == other.hour) {
            if (this->minute < other.minute) {
                return true;
            }
            else return false;
        }
        else {
            return false;
        }
    }
    Time operator + (Time& other) {
        Time newTime{ this->hour + other.hour, this->minute + other.minute };
        return newTime;
    }

    int hour;
    int minute;
};


int main()
{
    Time t1{ 10, 20 };
    Time t2{ 11, 12 };

    if (t1 < 10) {

    }
    if (t1 < t2) {
        cout << "T1 is less\n";
    }
    else {
        cout << "T1 is greater or equal\n";
    }

    Time t3 = t1 + t2;
    
    cout << "T3 = " << t3.hour << ":" << t3.minute << endl;

    
    Date d1{ 1,1,1991 };
    Date d2{ 10,10,1990 };

    
    if (d1 == d2) {

    }
    if (d1 < d2) {

    }

    Date d3 = d1 + 10;


}

