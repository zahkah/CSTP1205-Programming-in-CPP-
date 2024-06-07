// shape_week4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    
     // Hardcode the number of rows to 5
    int rows = 5;

    // Loop from 1 to the number of rows
    for (int i = 1; i <= rows; ++i) {
        // For each row, print as many asterisks as the row number
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        // Move to the next line after printing all asterisks in a row
        std::cout << "\n";
    }

    // Return 0 to indicate that the program finished successfully
    return 0;



   

   //QUESTION 2

    // Hardcode the number of rows to 5
    int rows = 5;

    // Loop from the number of rows down to 1
    for (int i = rows; i >= 1; --i) {
        // Print as many asterisks as the row number
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        // Move to the next line after printing all asterisks in a row
        std::cout << "\n";
    }

    // Return 0 to indicate that the program finished successfully
    return 0;


    }