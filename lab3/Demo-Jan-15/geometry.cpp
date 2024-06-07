#include "geometry.h"


int square(const int x)
{
    return x * x;
}

int area(const int x)
{
    const int PI = 3;
    return PI * square(x);
}



int volumeCylinder(int height, int radius)
{
    int myHieght = height;
    int myRadius = radius;
    return myHieght * area(myRadius);
}
