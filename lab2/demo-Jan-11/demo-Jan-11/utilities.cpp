#include <iostream>


int myMax3(int x, int y)
{
	return x > y ? x : y;
}

template<class T>
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