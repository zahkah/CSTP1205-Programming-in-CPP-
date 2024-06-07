#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <windows.h>
#include "Entity.h"
#include "Drive.h"
#include "direct.h"

using namespace std;
class Application :
	public Entity
{
public:
	Application(string name) :
		Entity(name)
	{

	}


	vector<string> getDiskDrives()
	{
		char g_szDrvMsg[] = "A";
		vector<string> driveList{};

		ULONG uDriveMask = _getdrives();

		if (uDriveMask == 0)
		{
			cout << "Could not find any drive" << GetLastError();
		}
		else
		{
			while (uDriveMask) {
				if (uDriveMask & 1) {
					string s{ g_szDrvMsg };
					driveList.push_back(s);
					cout << g_szDrvMsg << endl;
				}

				++g_szDrvMsg[0];
				uDriveMask >>= 1;
			}
		}
		return driveList;
	}

	void init()
	{
		vector<string> driveList = getDiskDrives();
		for (auto& d : driveList) {
			shared_ptr<Drive> dPtr = make_shared<Drive>(d);
			addMember(dPtr);
		}
		
	}
	
	void show()
	{
		showMembers();
	}
	void showSummary()
	{
		showMembers();
	}
	
	void showMembers()
	{
		for (auto& entity : members) {
			
			entity.second->showSummary();
		}
	}
};

