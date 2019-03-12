//
// Created by Ronald Tran on 2019-03-11.
//

//• The ParkingMeter Class: This class should simulate a parking meter. The class’s
//        only responsibility is:
//– To know the number of minutes of parking time that has been purchased

#ifndef HOMEWORK4_PARKING_TICKET_PARKINGMETER_H
#define HOMEWORK4_PARKING_TICKET_PARKINGMETER_H


class ParkingMeter {
private:
    double numberOfMinutes;

    //A friend function is a function that is not part of a class, but that has access to the class’s private members.
    // In other words, a friend function is treated as if it were a member of the class. A friend function can be a
    // regular stand-alone function, or it can be a member of another class.
    friend class PoliceOfficer;
    friend class ParkingTicket;

public:
    ParkingMeter();
    explicit ParkingMeter(double numMin);

    double getNumberOfMinutes();
};


#endif //HOMEWORK4_PARKING_TICKET_PARKINGMETER_H
