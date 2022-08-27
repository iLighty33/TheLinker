#include <algorithm>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "SimpleAndComplex.h"
#include "Car.h"
#include "Complex.h"


int main() {

    // Task 1

    SimpleAndComplex* simpleCar = new Car;
    std::cout << "Create My Simple Car:\n";
    Car::CreateMyCar(simpleCar);
    std::cout << "\n\n";

    SimpleAndComplex* bigCar = new Complex;
    SimpleAndComplex* gazelle = new Complex;
    SimpleAndComplex* lightCar_1 = new Car;
    SimpleAndComplex* lightCar_2 = new Car;
    SimpleAndComplex* cossack = new Cossack;

    gazelle->Add(cossack);
    bigCar->Add(gazelle);
    bigCar->Add(lightCar_1);
    bigCar->Add(lightCar_2);

    std::cout << "Create My Complex Big Car:\n";
    Car::CreateMyCar(bigCar);
    std::cout << "\n\n";

    // Task 2. Collection and statistics

    std::cout << "<simpleCars>: \n";
    int carsQuantity = 6;
    std::vector <Car> simpleCars;
    simpleCars.reserve(carsQuantity);
    Car::fillMyVector(simpleCars, carsQuantity);
    Car::sortMyVector1(simpleCars, carsQuantity);
    Car::sortMyVector2(simpleCars, carsQuantity);

    // Weight
    bigCar->setWeigth(3000);
    gazelle->setWeigth(1500);
    lightCar_1->setWeigth(500);
    lightCar_2->setWeigth(900);
    cossack->setWeigth(1200);

    std::vector <int> myWeight;
    myWeight.reserve(6);

    myWeight.push_back(bigCar->getWeigth());
    myWeight.push_back(gazelle->getWeigth());
    myWeight.push_back(lightCar_1->getWeigth());
    myWeight.push_back(lightCar_2->getWeigth());
    myWeight.push_back(cossack->getWeigth());

    std::sort(myWeight.begin(), myWeight.end());

    std::cout << "\n";
    std::cout << "Most Hardest Cars: \n";

    for (int i = myWeight.size() / 2; i < myWeight.size(); i++) {

        std::cout << myWeight[i] << " " << "Kilo";
        std::cout << std::endl;

    }

    std::sort(myWeight.begin(), myWeight.end(), std::greater<>());

    std::cout << "\n";
    std::cout << "Most Lightest Cars: \n";

    for (int i = myWeight.size() / 2; i < myWeight.size(); i++) {

        std::cout << myWeight[i] << " " << "Kilo";
        std::cout << std::endl;

    }


    delete simpleCar;
    delete bigCar;
    delete gazelle;
    delete lightCar_1;
    delete lightCar_2;
    delete cossack;

    return 0;
}


