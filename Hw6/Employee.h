//
// Created by Ronald Tran on 2019-04-09.
//

/*
 * Design a class named Employee. The class should keep the following information in
• Employee name
• Employee number
• Hire date
Write one or more constructors and the appropriate accessor and mutator functions for the class.


Next, write a class named ProductionWorker that is derived from the Employee class. The ProductionWorker
class should have member variables to hold the following information:
• Shift (an integer)
• Hourly pay rate (a double)


 The workday is divided into two shifts: day and night. The shift variable will hold an integer value
 representing the shift that the employee works. The day shift is shift 1, and the night shift is shift 2.
 Write one or more constructors and the appropriate accessor and mutator functions for the class. Demonstrate
 the classes by writing a program that uses a ProductionWorker object.
 */

#ifndef HW6_EMPLOYEE_H
#define HW6_EMPLOYEE_H

#include <iostream>


class Employee {

private:
    std::string name;
    int number;
    std::string hireDate;

public:
    //Exception
    class InvalidEmployeeNumber{};

    Employee(std::string tName, int tNumber, std::string tHiringDate) {
        name = tName;
        number = tNumber;
        hireDate = tHiringDate;
    }

    Employee(): name(""), number(0),hireDate(""){}

    std::string getName() {
        return name;
    }

    int getNumber() {
        return number;
    }

    std::string getHireDate() {
        return hireDate;
    }

    void setName(std::string n) {
        name = n;
    }

    void setNumber(int tName) {
        if(tName > 0 and tName < 9999){
            number = tName;
        } else {
            throw InvalidEmployeeNumber();
        }
    }

    void setHireDate(std::string hd) {
        hireDate = hd;
    }

};


#endif //HW6_EMPLOYEE_H
