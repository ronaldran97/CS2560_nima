//
// Created by Ronald Tran on 2019-04-09.
//



#include<iostream>
#include "ProductionWorker.h"
#include "Employee.h"



int main() {

    std::cout << "Employee Exception" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "Employee Number set to 100000 for tes which is bigger than 9999." << std::endl;
    Employee Ronald;
    try {
        Ronald.setName("Ronald");
        Ronald.setHireDate("November 6, 2019");
        Ronald.setNumber(100000);

    }
    catch (Employee::InvalidEmployeeNumber) {

        std::cout << "\nError: Employee Number is above 9999 or below 0." << std::endl;
    }

//    std::cout<<"\n"<< Ronald.getName() << "\n";
//    std::cout<<"\n"<< Ronald.getNumber() << "\n";
//    std::cout<< Ronald.getHireDate() << "\n";




    std::cout << "\nProductionWorker Exceptions" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Shift set to 6, which is a not 0 or 1, for test.\n";
    std::cout << "Pay rate set to negative double for test.\n";

//    ProductionWorker Rosie("Ronald", 12345, "November 6, 2019", 6, 21.65);

    ProductionWorker Rosie;
    try {
        Rosie.setShift(6);
    }catch (ProductionWorker::InvalidShift) {
            std::cout << "\nError: Not a day or night shift.\n";
        }
    try {
        Rosie.setPayRate(-9.2);
    }catch (ProductionWorker::InvalidPayRate) {
        std::cout << "Error: Cannot have a negative pay rate.\n";
    }

//    std::cout << Rosie.getName() << "\n";
//    std::cout << Rosie.getNumber() << "\n";
//    std::cout << Rosie.getHireDate() << "\n";
//    std::cout << Rosie.getShift() << "\n";
//    std::cout << Rosie.getPayRate() << "\n";
    return 0;

}
