#include <iostream>
#include "Wagon.h"

using namespace std;

Wagon::Wagon()
{
    count = 0;
}

bool Wagon::addCapybara(Capybara newCapy)
{
    bool a = true;
    if (count < 4) {
        capy[count] = newCapy;
        count++;
        a = true;
    }

    else {
        a = false;
    }

    return a;
}
void Wagon::emptyWagon()
{
    count = 0;
}


void Wagon::printCapybaras()
{
    for (int i = 0; i < 3; i++) {
        cout << capy[i].name << " " << capy[i].age << endl;
    }
}

Wagon::~Wagon()
{
}