//
// Created by Ronald Tran on 2019-03-04.
//
#include <iostream>
#include <string>
#include <iomanip>
#include "EmployeeObjects.h"
#include "Employee.cpp"

int main() {

    Employee EMPLOYEES[3] = {
            Employee("Susan Meyers", 47889, "  Accounting  ", "Vice President"),
            Employee("Mark Jones", 39119, "  IT  ", "Programmer"),
            Employee("Joy Rogers", 81774, "  Manufacturing  ", "Engineer")
    };

    cout << " NAME	ID NUMBER	DEPARTMENT	POSITION\n";
    cout << "-------------------------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        cout << setw(8) << EMPLOYEES[i].getName();
        cout << setw(8) << EMPLOYEES[i].getID();
        cout << setw(8) << EMPLOYEES[i].getDep();
        cout << setw(8) << EMPLOYEES[i].getPos() << endl;
    }
    return 0;
}

