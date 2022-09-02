#ifndef Airplane_H
#define Airplane_H
#include <string>
#include "Person.h"
using namespace std;

class Airplane
{

	
public:
	string callsign;
	Person thePilot;
	Person theCoPilot;
	
	
	Airplane(string callsign,Person thePilot,Person theCoPilot);
	void setPilot(Person thePilot);
	Person getPilot();
	void setCoPilot(Person theCoPilot);
	Person getCoPilot();
	void printDetails();
	~Airplane();
};
#endif 
