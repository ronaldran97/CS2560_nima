//
// Created by Ronald Tran on 2019-04-18.
//

#include "Parent.h"
#include <vector>

void Parent::setChildName(Child &c, std::string name){
    c.name = name;
}

void Parent::setChildAllowance(int allowance, Child){
    allowance = 5;
}

void Parent::printChild(vector<Child> child){
    for(int i=0; i<child.size(); ++i)
        std::cout << child[i] << ' ';
}
