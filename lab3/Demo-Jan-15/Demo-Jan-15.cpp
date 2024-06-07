// Demo-Jan-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "geometry.h"

using namespace std;

int counter;


double convertTemp(double celTemp)
{
    double fahrTemp{ 0 };
    fahrTemp = (celTemp * 9) / 5 + 32;
    return fahrTemp;
}

template<typename T>
T myMin(T val1, T val2)
{
    T min;
    if (val1 < val2)
        min = val1;
    else
        min = val2;
    return max;
}



int main()
{
    int val1{ 10 };
    int counter{10};
    
    int vol = volumeCylinder(20, 10);
    cout << "vol " << vol;

}

