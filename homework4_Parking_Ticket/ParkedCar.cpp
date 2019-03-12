//
// Created by Ronald Tran on 2019-03-11.
//

//• The ParkedCar Class: This class should simulate a parked car. The class’s respon- sibilities are:
//– To know the car's make, model, color, license number, and the number of min-
//utes that the car has been parked

#include "ParkedCar.h"


//constructor
ParkedCar::ParkedCar() : make(""), color(""), model(""), licenseNumber(""), minutes(0){
    //setting default values
}

ParkedCar::ParkedCar(string mk, string col, string ln, double min, string mod) : make(mk), color(col),
licenseNumber(ln), model(mod), minutes(min) {}

string ParkedCar::getMake() {
    return make;
}

string ParkedCar::getColor() {
    return color;
}

string ParkedCar::getLicenseNum() {
    return licenseNumber;
}

string ParkedCar::getModel() {
    return model;
}

double ParkedCar::getMinutes() {
    return minutes;
}
