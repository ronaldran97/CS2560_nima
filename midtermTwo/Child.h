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

#include "Parent.h"
#include "Human.h"
#include <iostream>


class Child : public Human {
    friend class Parent;
private:
    Parent Mom;
    Parent Dad;
    std::string name;
    int age;
    char sex;
    Child(){}

public:
    Child(std::string humansName, int humansAge, char humansSex, Parent m, Parent d) : Human(humansName, humansAge,
            humansSex))  {

        name = humansName;
        age = humansAge;
        sex = humansSex;
        Mom = m;
        Dad = d;
    }

    int getAllowance() const;
    void printParent();
};



#endif //MIDTERMTWO_CHILD_H
