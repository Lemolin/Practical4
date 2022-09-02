#include <iostream>
#include "Airplane.h"
#include<string>
using namespace std;


Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
{
	this->callsign = callsign;
	this->thePilot = thePilot;
	this->theCoPilot = theCoPilot;

}

void Airplane::setPilot(Person thePilot)
{
	this->thePilot = thePilot;

}

Person Airplane::getPilot()
{
	return thePilot;
}

void Airplane::setCoPilot(Person theCoPilot)
{
	this->theCoPilot = theCoPilot;

}

Person Airplane::getCoPilot()
{
	return theCoPilot;
}
void Airplane::printDetails() {
	cout << callsign << endl;
	cout << thePilot.getName() << endl;
	cout << theCoPilot.getName() << endl;
	cout << endl;

}
Airplane::~Airplane()
{
}