#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

int main()
{
    Car car;

    car.setBrand("Saab");
    car.setModel("9-5");
    car.setYearModel(2004);

    std::cout << "Auton tiedot" << std::endl;
    car.printData();

    Rectangle *rectangle = new Rectangle;

    rectangle->setWidth(5.5);
    rectangle->setHeight(3.0);

    std::cout << std::endl;
    std::cout << "Suorakulmion pinta-ala: "
              << rectangle->getArea() << std::endl;

    std::cout << "Suorakulmion ymparysmitta: "
              << rectangle->getCircum() << std::endl;

    delete rectangle;
    rectangle = nullptr;

    std::unique_ptr<Student> student = std::make_unique<Student>();

    student->setName("Matti Meikalainen");
    student->setStudentNumber(9123123);
    student->setAverage(3.0);

    std::cout << std::endl;
    std::cout << "Opiskelijan nimi: "
              << student->getName() << std::endl;

    std::cout << "Opiskelijanumero: "
              << student->getStudentNumber() << std::endl;

    std::cout << "Keskiarvo: "
              << student->getAverage() << std::endl;

    return 0;
}