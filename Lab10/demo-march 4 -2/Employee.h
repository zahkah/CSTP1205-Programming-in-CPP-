#pragma once
#include <string>
#include <memory>
using namespace std;

class Employee {
public:
    Employee(string nameIn, double salaryIn) :
        name(nameIn),
        salary(salaryIn)
    {

    }
    ~Employee() {

    }
    string getName()
    {
        return name;
    }
    double getSalary()
    {
        return salary;
    }
    bool operator < (shared_ptr<Employee>& other)
    {
        return this->getSalary() < other->getSalary();
    }
private:
    string name;
    double salary;
};
