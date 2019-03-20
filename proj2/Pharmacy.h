//
// Created by Ronald Tran on 2019-03-19.
//

#ifndef PROJ2PATIENTS_PHARMACY_H
#define PROJ2PATIENTS_PHARMACY_H

#include "PatientAccount.h"
#include <string>
using namespace std;

/**
 * The Pharmacy class will have stored within it the price of at least five types of medication.
 * It can update the charges variable of the PatientAccount class.
 */

class Pharmacy {
private:
    const string painKillers = "pain killers";
    const int painKillersCost = 250;

    const string allergyMed = "allergy medicine";
    const int allergyMedCost = 980;

    const string eyeBallCream = "eye ball juices";
    const int eyeBallCreamCost = 760;

    const string dencherWhitener = "dencher whitener";
    const int dencherWhitenerCost = 4;

    const string GummyBears = "Gummy Bear Vitamins";
    const int GummyBearCosts = 2000;

public:
    Pharmacy();
    void TotalChargesPharmacy(PatientAccount &patientaccount, string name);

};


#endif //PROJ2PATIENTS_PHARMACY_H
