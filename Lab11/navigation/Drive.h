#pragma once

#include "Entity.h"
#include <cstdint>
#include <filesystem>
#include <iostream>
#include <filesystem>
#include <memory>
#include "Folder.h"

using namespace std;
const double gb = 1024.0 * 1024.0 * 1024.0;

class Drive : public Entity
{
public:
	Drive(string name) :
		Entity(name)
	{
	
	}
	void init()
	{
	
		string path = name + ":\\";
		for (const auto& entry : filesystem::directory_iterator(path)) {
			shared_ptr<Folder> pFolder = make_shared<Folder>(entry.path().string());
			addMember(pFolder);
		}
	
	}
	void show() 
	{
		showMembers();	
	}

	void showMembers()
	{
		for (auto& entity : members) {
			entity.second->showSummary();
		}
	}
	 
	void showSummary()
	{
		std::error_code ec;

		std::cout << "\n\tDrive: " << name << endl;
		const std::filesystem::space_info si = 
			std::filesystem::space(name + ":\\", ec);
		double capacity_in_gb = si.capacity / gb;
		double free_in_gb = si.free / gb;
		std::cout << std::fixed;
		std::cout << "\n\tCapacity: " << std::setprecision(2) << capacity_in_gb << " GB ";
		std::cout << "\n\tAvailable: " << std::setprecision(2) << free_in_gb << " GB ";

	}
	
};

