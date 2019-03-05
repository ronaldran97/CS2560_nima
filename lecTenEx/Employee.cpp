//Write a class named Employee that has the following member variables:
//• name. A string that holds the employee’s name.
//• idNumber. An int variable that holds the employee’s ID number.
//• department. A string that holds the name of the department where the employee
//works.
//• position. A string that holds the employee’s job title.
//
//The class should have the following constructors:
//• A constructor that accepts the following values as arguments and assigns them to the appropriate member variables:
// employee’s name, employee’s ID number, depart- ment, and position.
//• A constructor that accepts the following values as arguments and assigns them to the appropriate member variables:
// employee’s name and ID number. The department and position fields should be assigned an empty string ("").
//• A default constructor that assigns empty strings ("") to the name, department, and position member variables, and 0
// to the idNumber member variable.
//
// Write appropriate mutator functions that store values in these member variables and accessor functions that return
// the values in these member variables. Once you have written the class, write a separate program that creates three
// Employee objects to hold the following data.
//
// Name
//Susan Meyers Mark Jones Joy Rogers
//ID Number
//47899
//39119
//81774
//Department Position
//Accounting Vice President IT Programmer Manufacturing Engineer
//     The program should store this data in the three objects and then display the data for each employee on the screen.

//PERSONAL NOTES
//Constructor must have unique arguments
//Setter - write or set values
//Getters - get values
//mutators = setter
//accessor = getter

#include <iostream>
#include <string>
using namespace std;

class Employee {

private:
    string name; //A string that holds the employee’s name.
    int idNumber; //An int variable that holds the employee's ID number
    string department; //a string that holds the name of the department where the employee works
    string position; //a string that holds the emplyee's job title

public:

    /**
     * A constructor that accepts the following values as arguments and assigns them to the appropriate member
     * variables: employee’s name, employee’s ID number, depart- ment, and position.
     */
    Employee(string assignName, int assignID, string assignDep, string assignPos){
        name = assignName;
        idNumber = assignID;
        department = assignDep;
        position = assignPos;
    }

    /**
     * A constructor that accepts the following values as arguments and assigns them to the appropriate member
     * variables: employee’s name and ID number. The department and position fields should be assigned an empty
     * string ("").
     * @param n name
     * @param i idNumber
     */
    Employee(string assignName, int assignID) {
        name = assignName;
        idNumber = assignID;
    }

    /**
     * A default constructor that assigns empty strings ("") to the name, department, and position member variables,
     * and 0 to the idNumber member variable.
     */
    Employee();

    
    string getName() {
        return name;
    }

    int getID() {
        return idNumber;
    }

    string getDep() {
        return department;
    }

    string getPos() {
        return position;
    }

    int main() {
        return 0;
    }

};