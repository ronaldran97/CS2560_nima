//
// Created by Ronald Tran on 2019-04-18.
//

#ifndef MIDTERMTWO_PARENT_H
#define MIDTERMTWO_PARENT_H

#include <vector>
#include "Child.h"
#include "Human.h"

class Parent: public Human{
private:
    std::vector<std::string> childrenVec; //save the name of the children
    Parent();
    //Child &specificChild;

public:
    Parent(std::string name, int age, char sex);
    friend class Child;
    void setChild(Child specificChild);
    void setChildAllowance(int allowance,Child& specificChild);
};



#endif //MIDTERMTWO_PARENT_H
