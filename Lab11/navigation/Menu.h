#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Entity.h"
#include "MenuItem.h"
#include <iostream>
using namespace std;
class Menu
{
public:
	Menu(string titleIn, shared_ptr <Entity> obj) :
		title{ titleIn },
		entityObj{obj}
	{

	}
	/*void addMenuItem(shared_ptr<MenuItem> menuitem) {
		items.push_back(menuitem);
	}
	*/
	virtual void init()
	{

	}
	void addMenuItem(string menuitem) {
		items.push_back(menuitem);
	}
	void showMenu() {
		cout << "\n\n";
		cout << "\n\t============  " << title << "  ===========\n";
		int count = 0;
		for (auto& i : items) {
			count++;
			cout << "\n\t  " << count  << ". " << i << endl;
		}
		cout << "\n\t============  " << title << "  ===========\n";
	}
	virtual void doLoop()
	{
		
	}

protected:
	string title;
	vector<string> items;
	shared_ptr<Entity> entityObj;
};

