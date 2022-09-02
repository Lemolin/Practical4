#ifndef Person_H
#define Person_H
#include <string>
using namespace std;

class Person
{
public:
	int salary;
	string name;
	Person();
	Person(string name);
	Person(int mySalary, string myName);
	void setName(string myName);
	string getName();
	void setSalary(int Salary);

	int getSalary();
	~Person();
};
#endif 

