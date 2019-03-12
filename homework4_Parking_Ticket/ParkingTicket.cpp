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

#include "ParkingTicket.h"
#include "PoliceOfficer.h"

#include "cmath"


// sets the initial fine and additional fine
ParkingTicket::ParkingTicket() : initialFine(25.00), additionalFine(10.00) {}

string ParkingTicket::reportCar(ParkedCar &car) {
    return "\nCar Make: " + car.getMake() + "\nCar Model: " + car.getModel() + "\nCar Color: " + car.getColor() +
    "Car License Number: " + car.getLicenseNum();
}


string ParkingTicket::reportingOfficer(PoliceOfficer &officer) {
    string officerName = officer.name;
    string badge = to_string(officer.badge);
    return "Officer Name: " + officerName + "\nBadge #: " + badge;
}

double ParkingTicket::reportFine(ParkedCar& car, ParkingMeter& meter) {
    double totalFine = 0;
    double overTime = 0;

    if (car.getMinutes() > meter.getNumberOfMinutes()) {
        totalFine = initialFine;
        overTime = ceil((car.getMinutes() - meter.getNumberOfMinutes())) * additionalFine;
    }

    return totalFine + overTime;
}
