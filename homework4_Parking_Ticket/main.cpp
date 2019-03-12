#include <iostream>
#include "ParkedCar.h"
#include "ParkingTicket.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

/**
 * For this assignment you will design a set of classes that work together to simulate a police officer issuing a
 * parking ticket. The classes you should design are:



• The ParkedCar Class: This class should simulate a parked car. The class’s respon- sibilities are:
– To know the car's make, model, color, license number, and the number of min-
utes that the car has been parked


• The ParkingMeter Class: This class should simulate a parking meter. The class’s
only responsibility is:
– To know the number of minutes of parking time that has been purchased


• The ParkingTicket Class: This class should simulate a parking ticket. The class’s
responsibilities are:
– To report the make, model, color, and license number of the illegally parked car
– To report the amount of the fine, which is $25 for the first hour or part of an
hour that the car is illegally parked, plus $10 for every additional hour or part of
an hour that the car is illegally parked
– To report the name and badge number of the police officer issuing the ticket


• The PoliceOfficer Class: This class should simulate a police officer inspecting parked cars. The class’s responsibilities are:
– To know the police officer’s name and badge number
– To examine a ParkedCar object and a ParkingMeter object, and determine
whether the car's time has expired
– To issue a parking ticket (generate a ParkingTicket object) if the car’s time has
expired

Write a program that demonstrates how these classes collaborate.
 * @return
 */
int main() {

    ParkedCar car = ParkedCar("Toyota", "silver", "6KBE667", 45,"RAV4");
    ParkingMeter meter(1);
    PoliceOfficer officer("Dirty Harry", 15426);

    ParkingTicket ticket;
    ticket = officer.ticket(car, meter);

    cout << ticket.reportCar(car) << endl;
    cout << ticket.reportingOfficer(officer) << endl;
    cout << "Fine: $" << ticket.reportFine(car, meter) << endl;

    return 0;
}