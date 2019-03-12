//
// Created by Ronald Tran on 2019-03-11.
//


//• The ParkedCar Class: This class should simulate a parked car. The class’s respon- sibilities are:
//– To know the car's make, model, color, license number, and the number of min-
//utes that the car has been parked

#ifndef HOMEWORK4_PARKING_TICKET_PARKEDCAR_H
#define HOMEWORK4_PARKING_TICKET_PARKEDCAR_H

#include <string>
using namespace std;


class ParkedCar {
//make, model, color, license number, and the number of minutes that the car has been parked
private:
    string make;
    string color;
    string licenseNumber;
    double minutes;
    string model;
public:

    //Constructor
    ParkedCar();

    //A default constructor that assigns empty strings ("") to the variables
    ParkedCar(string mk, string col, string ln, double min, string mod);

    string getMake();
    string getColor();
    string getLicenseNum();
    string getModel();
    double getMinutes();




};


#endif //HOMEWORK4_PARKING_TICKET_PARKEDCAR_H
