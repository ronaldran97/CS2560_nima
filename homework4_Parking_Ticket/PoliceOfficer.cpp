//
// Created by Ronald Tran on 2019-03-11.
//

#include "PoliceOfficer.h"
#include "ParkingTicket.h"

//setting the name and badge to nothing using constructor
PoliceOfficer::PoliceOfficer() : name(""), badge(0) {}

PoliceOfficer::PoliceOfficer(string nm, int bdge) {
    name = nm;
    badge = bdge;
}

ParkingTicket PoliceOfficer::ticket(ParkedCar& car, ParkingMeter& meter) {
    class ParkingTicket ticket;
    return ticket;

}



int PoliceOfficer::getBadge() {
    return badge;
}

string PoliceOfficer::getName() {
    return name;
}
