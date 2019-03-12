//
// Created by Ronald Tran on 2019-03-11.
//

//• The ParkingTicket Class: This class should simulate a parking ticket. The class’s
//        responsibilities are:
//– To report the make, model, color, and license number of the illegally parked car
//– To report the amount of the fine, which is $25 for the first hour or part of an
//        hour that the car is illegally parked, plus $10 for every additional hour or part of
//an hour that the car is illegally parked
//– To report the name and badge number of the police officer issuing the ticket

#ifndef HOMEWORK4_PARKING_TICKET_PARKINGTICKET_H
#define HOMEWORK4_PARKING_TICKET_PARKINGTICKET_H

//to access the model... etc. of car
#include "ParkedCar.h"
//to access the time
#include "ParkingMeter.h"
//to access police officer
#include "PoliceOfficer.h"
using namespace std;
class PoliceOfficer;

class ParkingTicket {
private:
    //$25
    double initialFine;
    //$10
    double additionalFine;


public:
    //default constructor
    ParkingTicket();

    string reportCar(ParkedCar& car);

    double reportFine(ParkedCar &car, ParkingMeter &meter);

    string reportingOfficer(PoliceOfficer& officer);

};


#endif //HOMEWORK4_PARKING_TICKET_PARKINGTICKET_H
