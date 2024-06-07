#pragma once
#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include <map>
using namespace std;
class Entity
{
public: 
	Entity(string nameIn) :
		name{ nameIn } {

	}
	virtual void init()
	{

	}
	virtual void addMember(shared_ptr<Entity> member)
	{
		members[member->getName()] = member;
	}
	string getName()
	{
		return name;
	}
	virtual  shared_ptr<Entity> getMember(string name)
	{
		auto it = members.find(name);
		if (it != members.end()) {
			return it->second;
		}
		else {
			return nullptr;
		}
	}
	virtual void show() 
	{}
	virtual void showSummary() {};


protected:
	string name;

	map<string, shared_ptr<Entity>> members;

};

