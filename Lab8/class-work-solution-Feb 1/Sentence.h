#pragma once
#include <string>
#include <iostream>
using namespace std;

class Sentence
{
public:
	Sentence(string input) :
		data{ input } {

	}

	std::string get_first_word() const
	{
		int pos = data.find(' ');
		if (pos == string::npos) {
			return data;
		}
		return data.substr(0, pos);
	}
	std::string get_last_word() const
	{
		//int pos = data.find_last_of(" ");
		int pos = data.rfind(' ');
		if (pos == string::npos) {
			return data;
		}
		return data.substr(pos);

	}
	int count_words() const
	{
		int pos = data.find(' ');
		int count = 1;
		while (pos != string::npos) {
			//cout << count << endl;
			count++;
			pos = data.find(' ', pos + 1);
		}
		return count;
	}

	std::string remove_spaces()
	{
		int start_pos = data.find_first_not_of(" ");
		int last_pos = data.find_last_not_of(" ");

		return data.substr(start_pos, last_pos - start_pos + 1);

	}
	int count_digits() const
	{
		int count = 0;
		for (auto ch : data) {
			if (isdigit(ch)) {
				count++;
			}
		}
		return count;
	}
	int count_alpha() const
	{
		int count = 0;
		for (auto ch : data) {
			if (isalpha(ch)) {
				count++;
			}
		}
		return count;
	}

private:
	string data;
};





