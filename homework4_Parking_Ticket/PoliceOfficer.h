//
// Created by Ronald Tran on 2019-03-11.
//

//• The PoliceOfficer Class: This class should simulate a police officer inspecting parked cars. The class’s responsibilities are:
//– To know the police officer’s name and badge number
//– To examine a ParkedCar object and a ParkingMeter object, and determine
//whether the car's time has expired
//– To issue a parking ticket (generate a ParkingTicket object) if the car’s time has
//        expired

#ifndef HOMEWORK4_PARKING_TICKET_POLICEOFFICER_H
#define HOMEWORK4_PARKING_TICKET_POLICEOFFICER_H
#include <string>
#include "ParkingMeter.h"
#include "ParkedCar.h"

#include "ParkingTicket.h"
using namespace std;

class PoliceOfficer {
private:
    string name;
    int badge;

    friend class ParkingTicket;
public:
    PoliceOfficer();
    PoliceOfficer(string nm, int bdge);
    //class?
    class ParkingTicket ticket(ParkedCar& car, ParkingMeter& meter);

    string getName();
    int getBadge();



};


#endif //HOMEWORK4_PARKING_TICKET_POLICEOFFICER_H
