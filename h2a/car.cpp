#include "car.h"
#include <iostream>

void Car::printData()
{
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Vuosimalli: " << yearModel << std::endl;
}

void Car::setBrand(std::string newBrand)
{
    brand = newBrand;
}

void Car::setModel(std::string newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}