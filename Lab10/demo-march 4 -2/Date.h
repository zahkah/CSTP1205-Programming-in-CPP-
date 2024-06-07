#pragma once
#pragma once
#include <iostream>

class Date
{

public:
	Date(int dIn, int mIn, int yIn) :
		day{ dIn }, month{ mIn }, year{ yIn }
	{
	}
	bool operator == (Date& other)
	{
		if (this->day == other.day &&
			this->month == other.month &&
			this->year == other.year) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator < (Date& other)
	{
		if (this->year < other.year)
		{
			return true;
		}
		else if (this->year == other.year && this->month < other.month) {
			return true;
		}
		else if (this->year == other.year && this->month == other.month
			&& this->day < other.day) {
			return true;
		}
		else {
			return false;
		}
	}

	Date operator + (int days)
	{
		int newday = this->day + days;
		int newmonth = this->month;
		int newyear = this->year;
		if (newday > 30) {
			newday = newday - 30;
			newmonth++;
		}
		if (newmonth > 12) {
			newmonth = newmonth - 12;
			newyear++;
		}
		return Date{ newday, newmonth, newyear };
	}
	void print()
	{
		std::cout << day << "/" << month << "/" << year << std::endl;
	}
	//map<int, int> days_of_month{ {1,31}, {2,28}, {3,31}, ...}
	int day;
	int month;
	int year;
};


