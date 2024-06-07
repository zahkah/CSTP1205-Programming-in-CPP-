#pragma once
#include <string>
#include <iostream>
#include "Menu.h"
#include "Entity.h"
using namespace std;

class Folder: public Entity
{
public:
	Folder(string f) :
		Entity(f)
	{
	}
	void showSummary()
	{
		cout << "\n\t" << name << endl; 
	}
};

