#include "VendingMachine.h"
#include "human.h"
#include "Windows.h"
#include <iostream>

int main() {
    SetConsoleOutputCP(65001);

    Snack* bounty = new Snack("Bounty", 200, 120);
    Snack* snickers = new Snack("Snickers", 325, 130);
    Human* user = new Human(350);


    SnackSlot* slot = new SnackSlot(4);
    slot->addSnack(bounty);
    slot->addSnack(snickers);
    slot->addSnack(bounty);
    slot->addSnack(snickers);
    slot->addSnack(bounty);


    int slotCount = 1;
    VendingMachine* machine = new VendingMachine(slotCount);
    machine->addSlot(slot);
    machine->buySnackFromSlot(1, 1, user);
    snickers->setPrice(250);
    machine->getEmptySlotsCount();
    slot->getRemainingCapacity();
    slot->getSnackCount();


    delete machine;
    delete slot;
    delete snickers;
    delete bounty;
    delete user;
    return 0;
}
