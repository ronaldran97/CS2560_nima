//
// Created by Ronald Tran on 2019-03-19.
//

#include "Pharmacy.h"
#include <iostream>
#include <string>
using namespace std;

Pharmacy::Pharmacy() {} //constructor

void Pharmacy::TotalChargesPharmacy(PatientAccount &patientaccount, string name) {
    if (name == painKillers)
    {
        patientaccount.charges += painKillersCost;
    }
    else if (name == allergyMed)
    {
        patientaccount.charges += allergyMedCost;
    }
    else if (name == eyeBallCream)
    {
        patientaccount.charges += eyeBallCreamCost;
    }
    else if (name == dencherWhitener)
    {
        patientaccount.charges += dencherWhitenerCost;
    }
    else if (name == GummyBears)
    {
        patientaccount.charges += GummyBearCosts;
    }
    else {
        cout <<"Sorry, our super high end pharmacy does not have that. Try CVS ";

    }

}