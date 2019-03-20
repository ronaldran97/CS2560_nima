#include <iostream>
#include "Surgery.h"
#include "PatientAccount.h"
#include "Pharmacy.h"

#include <string>
using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;

    int days = 0;
    string surgery = " ";
    string meds = " ";
    string blank = " ";

    //objects for patient account and stuff
    PatientAccount patient_account_ob = PatientAccount(days);
    Pharmacy pharmacy_ob = Pharmacy();
    Surgery surgery_ob = Surgery();


    cout << "\nHi welcome to your online legit hospital portal \n" << endl;
    cout << "How many days were you here for? \n" << endl;
    cin >> days;

    cout <<"What surgeries did you have (please type the name)? \n   Belly Button Removal \n   Second Stomach Addition"
           "\n   Laser Fingers Addition \n   Hands for Feet \n   Feet for Hands" << endl;
//    cin >> surgery;
    getline(cin, blank);
    getline(cin, surgery);
    surgery_ob.TotalChargesSurgery(patient_account_ob, surgery);

    cout << "Which medications did you aquire? \n   pain killers \n   allergy medicine \n   eye ball juices \n   dencher"
            " whitener \n   Gummy Bear Vitamins" << endl;
//    cin >> meds;
    getline(cin, blank);
    getline(cin, meds);
    pharmacy_ob.TotalChargesPharmacy(patient_account_ob, meds);

    cout << patient_account_ob.checkOut();
    cout << " Your total is: " << 15 + (500*30) + 980 << endl;
    cout << "\nThanks for coming in! ";
    //cout << patient_account_ob.checkOut();





    return 0;
}