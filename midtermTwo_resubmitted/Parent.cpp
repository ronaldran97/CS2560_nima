//
// Created by Ronald Tran on 2019-04-18.
//

#include "Parent.h"
#include <vector>

Parent::Parent(std::string name, int age, char sex):Human(name,age,sex){}

Parent::Parent(): Human("",0,',') {}

void Parent::setChildAllowance(int allowance, Child &specificChild) {
    specificChild.allowance = allowance;
}
void Parent::setChild(Child kid) {
    childrenVec.push_back(kid.getName());
}
