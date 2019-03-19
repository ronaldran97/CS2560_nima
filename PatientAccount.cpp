//
// Created by Ronald Tran on 2019-03-19.
//

#include "PatientAccount.h"

PatientAccount::PatientAccount(int days) {
    daysInHosp = days;
    charges = 0;
}

int PatientAccount::checkOut() {
    charges += daysInHosp * rate;
    return charges;
}