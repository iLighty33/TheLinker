#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "SimpleAndComplex.h"
#include "Complex.h"
#include "Car.h"



Car::Car()
{
}

std::string Car::Operation() const {
	return "Car";
};

int Car::getUniqueId() noexcept {

   int myNum = rand() % (5 - 1 + 1) + 1;
   return myNum;
}

double Car::getCost() noexcept {
    double myResult = 700.0 + (double)rand() / RAND_MAX * (1000.0 - 700.0);
    return myResult;
}

void Car::fillMyVector(std::vector<Car>& myCars, int& carsQuantity)
{
    for (int i = 0; i < carsQuantity; i++) {
        myCars.emplace_back(getUniqueId(), getCost());
    }
}

void Car::sortMyVector1(std::vector<Car>& myCars, int& carsQuantity) {

    std::vector <double> vectTemp;
    vectTemp.reserve(carsQuantity);

    for (auto& el : myCars) {
    
        vectTemp.push_back(el.carCost_);
    
  
    }

    std::sort(vectTemp.begin(), vectTemp.end());

    std::cout << "Most Expensive Cars: \n";

    for (int i = vectTemp.size() / 2; i < vectTemp.size(); i++) {

            std::cout << vectTemp[i] << " " << "$";
            std::cout << std::endl;
      
    }
}

void Car::sortMyVector2(std::vector<Car>& myCars,int& carsQuantity) {
    std::vector <double> vectTemp;
    vectTemp.reserve(carsQuantity);

    for (auto& el : myCars) {

        vectTemp.push_back(el.carCost_);


    }

    std::sort(vectTemp.begin(), vectTemp.end(), std::greater<>());

    std::cout << "\nMost Cheapest Cars: \n";

    for (int i = vectTemp.size() / 2; i < vectTemp.size(); i++) {

        std::cout << vectTemp[i] << " " << "$";
        std::cout << std::endl;

    }
}



void Car::showMyVector(std::vector<Car>& myCars) {
    for (auto& el : myCars) {

        std::cout << " " << el.carId_;
        std::cout << " " << el.carCost_ << "$";
        std::cout << std::endl;
    }
}

void Car::CreateMyCar(SimpleAndComplex* component) {
    std::cout << "MyCar: " << component->Operation();
}

std::string Cossack::Operation() const {
	return "Cossack";
}

std::string Gazelle::Operation() const {
	return "Gazelle";
}


