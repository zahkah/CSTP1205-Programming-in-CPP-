// class-work-solution-Feb 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "TextFile.h"
#include "Sentence.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    TextFile textFile1;
    for (int i = 0; i < 3; i++) {
        string myStr{ "" };
        cout << "enter string " << i + 1 << ":";
        getline(cin, myStr);
        Sentence mySentence(myStr);
        textFile1.addSentence(mySentence);
    }

    cout << "Total words: " << textFile1.get_total_words() << endl;
    cout << "Total alphabets: " << textFile1.get_total_alphabets() << endl;
    cout << "Total digits: " << textFile1.get_total_digits() << endl;
}