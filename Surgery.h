//
// Created by Ronald Tran on 2019-03-19.
//

#ifndef PROJ2PATIENTS_SURGERY_H
#define PROJ2PATIENTS_SURGERY_H

#include "PatientAccount.h"
#include "Pharmacy.h"
#include <string>
using namespace std;
/**
 * The Surgery class will have stored within it the charges for at least five types of surgery.
 * It can update the charges variable of the PatientAccount class.
 */

class Surgery {
private:
    const string bellyButtomRemoval = "Belly Button Removal";
    const int bellyButtonCost = 15;

    const string SecStomach = "Second Stomach Addition";
    const int additionalStomachCost = 20;

    const string LaserFingers = "Laser Fingers Addition";
    const int LaserFingerCost  = 2500;

    const string HandsForFeet = "Hands for Feet";
    const int HandsForFeetCost = 120;

    const string FeetForHands = "Feet for Hands";
    const int FeetCosts = 12000;

public:
    Surgery(); //constructpr
    void TotalChargesSurgery(PatientAccount &patientaccount, string name);

};


#endif //PROJ2PATIENTS_SURGERY_H
