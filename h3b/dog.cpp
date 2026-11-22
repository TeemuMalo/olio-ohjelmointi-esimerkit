#include "dog.h"
#include <iostream>

using namespace std;

Dog::Dog()
{
    cout << "Dog konstruktori" << endl;
}

Dog::~Dog()
{
    cout << "Dog destruktori" << endl;
}

void Dog::callout()
{
    cout << "Koira haukkuu!" << endl;
}