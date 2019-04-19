//
// Created by Ronald Tran on 2019-04-18.
//

#ifndef MIDTERMTWO_HUMAN_H
#define MIDTERMTWO_HUMAN_H

#include <iostream>
#include <vector>



class Human
{
    friend class Child;
    friend class Parent;
private:
    std::string name;
    int age;
    char sex;

    Human()
    {
        name = "";
        age = 0;
        sex = 'M';
    }

protected:
    Human(std::string humansName, int humansAge, char humansSex){
        name = humansName;
        age = humansAge;
        sex = humansSex;
    }

    std::string works;

public:
    std::string getWork(){
        return works;
    }

    std::string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    char getSex(){
        return sex;
    }

    void setName(std::string humanName){
        name = humanName;
    }

    void setAge(int humanAge){
        age = humanAge;
    }

    void setSex(char humanSex){
        sex = humanSex;
    }

    virtual void work(std::string myWork) {
        works = myWork;
    }
};




#endif //MIDTERMTWO_HUMAN_H


