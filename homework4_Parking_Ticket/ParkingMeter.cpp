//
// Created by Ronald Tran on 2019-03-11.
//

#include "ParkingMeter.h"

ParkingMeter::ParkingMeter() : numberOfMinutes(0) {};

ParkingMeter::ParkingMeter(double numMin) : numberOfMinutes(numMin) {};

double ParkingMeter::getNumberOfMinutes() {
    return numberOfMinutes;
}


