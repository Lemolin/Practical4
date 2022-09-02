#include <iostream>
#include "Person.h"
using namespace std;
// main program
int main()
{
	Person* wao, * dao;
	wao = new Person(1000,"eric");
	dao = new Person(2000,"mark");
	wao->setName("david");
	dao->setSalary(3000);
	cout << wao->getName() << dao->getSalary() << endl;

}