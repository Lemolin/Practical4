#ifndef Wagon_H
#define Wagon_H
#include <string>
#include "Capybara.h"

using namespace std;


class Wagon
{
public:
    Wagon();
    int count;
    Capybara capy[4];
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
    ~Wagon();
};
#endif