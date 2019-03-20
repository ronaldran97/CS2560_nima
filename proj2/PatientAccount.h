//
// Created by Ronald Tran on 2019-03-19.
//

#ifndef PROJ2PATIENTS_PATIENTACCOUNT_H
#define PROJ2PATIENTS_PATIENTACCOUNT_H


/**
 * The PatientAccount class will keep a total of the patient’s charges. It will also keep track of the number of
 * days spent in the hospital. The group must decide on the hospital’s daily rate.
 */

class PatientAccount {
private:
    double charges;
    int daysInHosp;
    const int rate = 500;
public:
    PatientAccount(int days);   //constructor
    int checkOut();             //when they leave the hosp
    friend class Surgery;       //so that they also have access to the patient
    friend class Pharmacy;

};


#endif //PROJ2PATIENTS_PATIENTACCOUNT_H
