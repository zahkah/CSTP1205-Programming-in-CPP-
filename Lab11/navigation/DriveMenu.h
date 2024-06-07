#pragma once

#include "Menu.h"
class DriveMenu :
    public Menu
{
public:
    DriveMenu(string titleIn, shared_ptr <Entity> obj) :
        Menu(titleIn, obj) {

    }
    void init()
    {
        addMenuItem("Show Folders");
        addMenuItem("Select Folder");
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
                cout << "\n\n\tPress any key to continue : ";
                cin >> input;

            }
            else if (input == '2') {
                cout << "Not implemeneted" << endl;
                cout << "\n\n\tPress any key to continue : ";
                cin >> input;
            }
            else if (input == '3') {
                break;
            }

        }
        
    }
};

