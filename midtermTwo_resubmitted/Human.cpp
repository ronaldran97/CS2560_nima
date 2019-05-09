//
// Created by Ronald Tran on 2019-04-18.
//

#include "Human.h"


//
//
//Human::~Human(){
//
//}//deconstructor
//
//std::string Human::getName() {
//    return name;
//}
//
//int Human::getAge() {
//    return age;
//}
//
//char Human::getSex() {
//    return sex;
//}
//
//void Human::setName(std::string humanName) {
//    name = humanName;
//}
//
//void Human::setAge(int humanAge) {
//    age = humanAge;
//}
//
//void Human::setSex(char humanSex) {
//    sex = humanSex;
//}

Human::Human(std::string name, int age , char sex){
    humanName = name;
    humanAge = age;
    humanSex = sex;
}

Human::Human(){

}//default constructor

Human::~Human(){

}//deconstructor

std::string Human::getName() {
    return humanName;
}

int Human::getAge() {
    return humanAge;
}

char Human::getSex() {
    return humanSex;
}

void Human::setName(std::string name) {
    humanName = name;
}

void Human::setAge(int age) {
    humanAge = age;
}

void Human::setSex(char sex) {
    humanSex = sex;
}