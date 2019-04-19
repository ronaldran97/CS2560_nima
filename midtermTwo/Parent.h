//
// Created by Ronald Tran on 2019-04-18.
//

#ifndef MIDTERMTWO_PARENT_H
#define MIDTERMTWO_PARENT_H

#include "Human.h"
#include "Child.h"
#include <iostream>
#include <vector>


class Parent : public Human
{
private:
    vector<Child> children;

public:
    Parent(std::string humansName, int humansAge, char humansSex) : Human(humansName, humansAge, humansSex){}
    Parent() : Human(){}
    vector<Child> getChild(){
        return children;
    }

    void setChild(vector<Child> child) {
        children = child;
    }
    void printChild(vector<Child> child) {}

    void setChildAllowance(int allowance, Child Bart) {
        allowance = 5;
    }
};


#endif //MIDTERMTWO_PARENT_H
