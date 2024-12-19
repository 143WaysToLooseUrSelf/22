#include "SnackSlot.h"
#include <iostream>

SnackSlot::SnackSlot(int capacity) : _capacity(capacity) {}

void SnackSlot::addSnack(Snack* snack) {
    if (snacks.size() < _capacity) {
        snacks.push_back(snack);
    } else {
        std::cout << "Слот переполнен. Невозможно добавить снэк: " << snack->getName() << "\n";
    }
}

void SnackSlot::buySnack(int snackIndex, Human* human) {
    if ((snackIndex-1) < 0 || (snackIndex-1) >= snacks.size()) {
        std::cout << "Неверный номер снека.\n";
    } else {
        Snack* snack = snacks[(snackIndex-1)];
        if (human->getBalance() < snack->getPrice()) {
            std::cout << "Недостаточно деняк для покупки: " << snack->getName() << "\n";
        } else{
            human->setBalance(human->getBalance() - snack->getPrice());
            snacks.erase(snacks.begin() + (snackIndex-1));
            std::cout << "Покупка " << snack->getName() << " успешна!\n";}
        }
}

void SnackSlot::getRemainingCapacity() {
    std::cout << "Оставшееся кол-во мест в слоте: " <<  _capacity - snacks.size() << "\n";
}

void SnackSlot::getSnackCount() {
    std::cout << "Кол-во заполненных мест в слоте: " <<  snacks.size() << "\n";
}

SnackSlot::~SnackSlot() {
}
