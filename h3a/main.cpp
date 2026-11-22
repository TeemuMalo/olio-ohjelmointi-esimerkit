#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    ItalianChef chef("Anthony Bourdain");

    chef.makeSalad();
    chef.makeSoup();
    chef.makePasta();

    cout << "name of the Italian Chef is " << chef.getName() << endl;

    return 0;
}