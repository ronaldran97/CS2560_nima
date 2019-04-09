//
// Created by Ronald Tran on 2019-04-09.
//

/**
 *
Next, write a class named ProductionWorker that is derived from the Employee class. The ProductionWorker
class should have member variables to hold the following information:
• Shift (an integer)
• Hourly pay rate (a double)


 The workday is divided into two shifts: day and night. The shift variable will hold an integer value
 representing the shift that the employee works. The day shift is shift 1, and the night shift is shift 2.
 Write one or more constructors and the appropriate accessor and mutator functions for the class. Demonstrate
 the classes by writing a program that uses a ProductionWorker object.
 */

#ifndef HW6_PRODUCTIONWORKER_H
#define HW6_PRODUCTIONWORKER_H

#include <iostream>
#include "Employee.h"

class ProductionWorker : public Employee {

private:
    int shift;
    double HPR;

public:

    //exceptions
    class InvalidShift{};
    class InvalidPayRate{};


    //sets initial value
    ProductionWorker() {
        shift = 0;
        HPR = 0;
    }

    ProductionWorker(std::string namePW, int numberPW, std::string hiringDatePW, int shiftPW, double HPRPW)
    : Employee(namePW, numberPW, hiringDatePW) {
        shift = shiftPW;
        HPR = HPRPW;
    }

    double getPayRate() {
        return HPR;
    }

    int getShift() {
        return shift;
    }

    void setPayRate(double payRate) {
        if(payRate > 0){
            HPR = payRate;
        }else{
            throw InvalidPayRate();
        }
    }


    void setShift(int shiftNum) {
        if((shiftNum == 0) or (shiftNum == 1)){
            shift = shiftNum;
        }else{
            throw InvalidShift();
        }
    }





};


#endif //HW6_PRODUCTIONWORKER_H
