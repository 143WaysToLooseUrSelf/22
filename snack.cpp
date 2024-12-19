#include <iostream>
#include "Snack.h"

Snack::Snack(std::string name, int calories, double price)
        : _name(name), _calories(calories), _price(price) {}

std::string Snack::getName() {
    return _name;
}

int Snack::getCalories() {
    return _calories;
}

double Snack::getPrice() {
    return _price;
}

void Snack::setPrice(double price) {
    std::cout << "Цена снека " << getName() << " изменена с " << getPrice() << " на " << price <<"\n";
    _price = price;
}



