//
// Created by Ronald Tran on 2019-04-18.
//

#ifndef MIDTERMTWO_HUMAN_H
#define MIDTERMTWO_HUMAN_H

#include <iostream>
#include <vector>



class Human{
private:
    std::string humanName;
    int humanAge;
    char humanSex;
    Human();

public:
    //setters
    std::string getName();
    int getAge();
    char getSex();

    //getters
    void setName(std::string);
    void setAge(int);
    void setSex(char);

protected:
    Human(std::string, int, char);
    virtual ~Human();

};




#endif //MIDTERMTWO_HUMAN_H


