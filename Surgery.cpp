//
// Created by Ronald Tran on 2019-03-19.
//

#include "Surgery.h"
#include <iostream>
#include <string>
using namespace std;

Surgery::Surgery() {} // constructor

void Surgery::TotalChargesSurgery(PatientAccount &patientaccount, string name) {
    if (name == bellyButtomRemoval)
    {
        patientaccount.charges += bellyButtonCost;
    }
    else if (name == SecStomach)
    {
        patientaccount.charges += additionalStomachCost;
    }
    else if (name == LaserFingers)
    {
        patientaccount.charges += LaserFingerCost;
    }
    else if (name == HandsForFeet)
    {
        patientaccount.charges += HandsForFeetCost;
    }
    else if (name == FeetForHands)
    {
        patientaccount.charges += FeetCosts;
    } else {
        cout <<"Sorry, our super high end cool surgery place does not have that. Try CVS \n";
    }
}