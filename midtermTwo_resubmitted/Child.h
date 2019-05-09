//
// Created by Ronald Tran on 2019-04-18.
//

/**
 * Member Variables:
	Private: string momName
	Private: string dadName
	Private: int allowance

Member Function:
	Private: default constructor
Public: constructor has 5 input argument, name, age, sex, momName and dadName. Initially set allowance to 0
Public: int getAllowance() const Prints allowance
	Public: void printParent() Prints parent names

 */

#ifndef MIDTERMTWO_CHILD_H
#define MIDTERMTWO_CHILD_H

//#include "Parent.h"
#include "Human.h"
#include <iostream>


class Child : public Human {

private:
    std::string momName;
    std::string dadName;
    int allowance;
    Child();
public:
    Child(std::string name, int age, char sex, std::string mom, std::string dad);

    void printParents();
    int getAllowance() const;

    friend class Parent; //Parent access
};



#endif //MIDTERMTWO_CHILD_H
