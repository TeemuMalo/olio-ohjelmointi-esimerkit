#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Saab", "9-5", 2004));
    carList.push_back(Car("Volvo", "940", 1992));
    carList.push_back(Car("Mercedes-benz", "W124", 1990));

    cout << "Listan toinen auto:" << endl;
    carList[1].printData();

    cout << endl;
    cout << "Kaikki autot:" << endl;

    for (int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
    }

    return 0;
}