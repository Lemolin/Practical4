#ifndef Capybara_H
#define Capybara_H
#include <string>
using namespace std;

class Capybara
{
public:
	Capybara();
	void setName(string capyName);
	string name;
	string getName();
	int age;
	void setAge(int capyAge);
	
	int getAge();
	~Capybara();
};
#endif 
