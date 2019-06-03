#include "Account.class.hpp"
#include <iostream>
Account::Account() {
    return;
}

Account::Account(int initial_deposit) {
    makeDeposit(initial_deposit);
}

Account::~Account() {
    return;
}

void Account::makeDeposit(int deposit) {
    this->_amount = this->_amount + deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
    if (withdrawal > this->_amount) {
        return false;
    } else {
        return true;
    }
}

int Account::checkAmount(void) const {
    return this->_amount;
}

void Account::displayStatus(void) const {

}

void Account::_displayTimestamp(void) {

}