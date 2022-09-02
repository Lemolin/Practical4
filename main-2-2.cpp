#include <iostream>
#include "Airplane.h"
using namespace std;
#include<string>

int main()
{
	Person p1("eric");

	Person p2("david");

	Person p3("jerry");

	Airplane a("CZZ", p1, p2);
	a.printDetails();

	a.setPilot(p3);
	a.printDetails();

	a.setCoPilot(p1);
	a.printDetails();
	return 0;

}

