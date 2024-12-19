#include "human.h"

Human::Human(double balance) : _balance(balance) {}

double Human::getBalance() {
    return _balance;
}

void Human::setBalance(double amount) {
    _balance = amount;
}
