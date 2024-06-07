#pragma once

#include "Menu.h"
#include "Drive.h"
#include "DriveMenu.h"

class ApplicationMenu :
    public Menu
{
public:
	ApplicationMenu(string titleIn, shared_ptr <Entity> obj) :
		Menu(titleIn, obj) {

	}
	void init()
	{
		addMenuItem("Show Drives");
		addMenuItem("Select Drive");
		addMenuItem("Exit");
	}
    void doLoop()
    {
		while (true) {
			showMenu();
			char input;
			cout << "\n\tEnter Option : ";
			cin >> input;
			
			if (input == '1') {
				entityObj->show();
				cout << "\n\n\tPress any key<enter> to continue : ";
				cin >> input;

			}
			else if (input == '2') {
				cout << "\n\tEnter drive name: ";
				string drive;
				cin.ignore();
				getline(cin,drive);
				
				shared_ptr<Drive> ptr =
					std::dynamic_pointer_cast<Drive>
					(entityObj->getMember(drive));
				
				if (ptr != nullptr) {
					ptr->init();
					DriveMenu dm{ "Drive", ptr };
					dm.init();
					dm.doLoop();
				}
				else {
					cout << "Back to main menu" << endl;
				}
			
			} else if (input == '3') {
				break;
			}
		}
    }
};

