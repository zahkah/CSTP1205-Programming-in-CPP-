// Demo-Jan29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
#include "Sentence.h"
#include <string.h>

// s1 and s2 are date of birth as string
// format = "YYYY/MM/DD"
// the function returns older of the two strings
bool determine_valid_password(string s)
{
    // string length > 12;
    if (s.size() <= 12) {
        return false;
    }
    int digit_counter = 0;
    int upper_counter = 0;
    int special_counter = 0;
    for (auto ch : s) {
        if (isdigit(ch)) {
            digit_counter++;
        } else  if (isupper(ch)) {
            upper_counter++;
        } else if (!isalnum(ch)) { 
            special_counter++;
        }
    }

    return (digit_counter > 0 && upper_counter > 0 && special_counter > 0);
}



int determine_older(string s1, string s2)
{
   
    int first_pos1 = s1.find('/');
    int second_pos1 = s2.find('/');
    int year1 = stoi(s1.substr(0, first_pos1));
    int year2 = stoi(s2.substr(0, first_pos1));

    if (year1 > year2) {
        return 2;
    }
    else if (year1 < year2) {
        return 1;
    }

    int first_pos2 = s1.find('/', first_pos1 + 1);
    int month1 = stoi(s1.substr(first_pos1, first_pos2 - first_pos1 + 1));
    int second_pos2 = s1.find('/', second_pos1 + 1);
    int month2 = stoi(s1.substr(second_pos1, second_pos2 - second_pos1 + 1));

    if (month1 > month2) {
        return 2;
    }
    else if (month1 < month2) {
        return 1;
    }

    int day1 = stoi(s1.substr(first_pos2 + 1));
    int day2 = stoi(s2.substr(second_pos2 + 1));

    if (day1 > day2) {
        return 2;
    }
    else if (day1 < day2) {
        return 1;
    }
    else {
        return 0;
    }
   


}

int main()
{
    Sentence s{ "The quick brown fox justs over the lazy dog" };
    cout << s.get_first_word();
    
    Sentence s1{ "OneWord" };
    //cout << s1.get_first_word() << endl;
    cout << "The number of words: " << s.count_words() << endl;

}

