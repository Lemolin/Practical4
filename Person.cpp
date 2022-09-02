#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = " ";
}

Person::Person(string name) {
	this->name = name;
}

Person::Person(int mySalary,string myName)
{
	salary = mySalary;
	name = myName;


}

void Person::setName(string myName)
{
	name = myName;

}

string Person::getName()
{
	return name;
}

void Person::setSalary(int mySalary)
{
	salary = mySalary;

}

int Person::getSalary()
{
	return salary;
}
Person::~Person()
{
}