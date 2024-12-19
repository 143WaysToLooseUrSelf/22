#include "VendingMachine.h"
#include <iostream>

VendingMachine::VendingMachine(int slotCount) : _totalSlots(slotCount) {}

void VendingMachine::addSlot(SnackSlot* slot) {
    if (slots.size() < _totalSlots) {
        slots.push_back(slot);
    } else {
    std::cout << "Достигнут предел вместимости. Добавление слота невозможно.\n";
    }
}

void VendingMachine::buySnackFromSlot(int slotIndex, int snackIndex, Human* human) {
    if ((slotIndex-1) < 0 || (slotIndex-1) >= slots.size()) {
        std::cout << "________________________________________________\n";
        std::cout << "Указан неверный номер слота.\n";
        std::cout << "________________________________________________\n";
    } else {
        std::cout << "________________________________________________\n";
        std::cout << "Баланс человека: " << human->getBalance() << "\n";
        slots[(slotIndex-1)]->buySnack(snackIndex, human);
        std::cout << "Баланс человека после покупки: " << human->getBalance() << "\n";
        std::cout << "________________________________________________\n";
    }
}

void VendingMachine::getEmptySlotsCount() {
     std::cout << "Кол-во пустых слотов в аппарате: " <<_totalSlots - slots.size() << "\n";
}

VendingMachine::~VendingMachine() {
}
