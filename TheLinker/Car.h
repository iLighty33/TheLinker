#pragma once
#include <iostream>


using namespace std;

/**
 * Класс Машина
 */
class Car : public SimpleAndComplex {
public:

	Car();
	Car(int carId, double carCost): carId_(carId), carCost_(carCost) {}

	std::string Operation() const override;

    int static getUniqueId() noexcept;
    
    double static getCost() noexcept;

	void static fillMyVector(std::vector<Car>& myCars, int& carsQuantity);

	static void CreateMyCar(SimpleAndComplex* component);

	static void showMyVector(std::vector<Car>& myCars);

	static void sortMyVector1(std::vector<Car>& myCars, int& carsQuantity);

	static void sortMyVector2(std::vector<Car>& myCars, int& carsQuantity);



private:

	int carId_ = 0;
	double carCost_ = 0;
};

/**
 * Класс Запорожец
 */
class Cossack : public SimpleAndComplex {
public:

	std::string Operation() const override;

};

/**
 * Класс Газель
 */
class Gazelle : public SimpleAndComplex {
public:

	std::string Operation() const override;

};

// Создать машинку


