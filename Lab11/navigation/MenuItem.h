#pragma once
#include <string>
using namespace std;
class MenuItem
{
public:
	MenuItem(string textIn, char inputIn) :
		text{ textIn },
		input{ inputIn } {
	}
	string getText()
	{
		return text;
	}
	char getInput()
	{
		return input;
	}
private:
	string text;
	char input;

};