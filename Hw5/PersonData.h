//
// Created by Ronald Tran on 2019-03-26.
//

#ifndef HW5_PERSONDATA_H
#define HW5_PERSONDATA_H

#include <iostream>

//Base Class
class PersonData {
private:
    std::string lastName;
    std::string firstName;
    std::string address;
    std::string city;
    std::string state;
    std::string zip;
    std::string phone;
public:
    PersonData();   //default constructor
    PersonData(std::string newLastName, std::string newFirstName,
            std::string newAddress, std::string newCity, std::string newState,
            std::string newZip, std::string newPhone);
    void setLastName(std::string newLastName);
    void setFirstName(std::string newFirstName);
    void setAddress(std::string newAddress);
    void setCity(std::string newCity);
    void setState(std::string newState);
    void setZip(std::string newZip);
    void setPhone(std::string newPhone);
    std::string getLastName();
    std::string getFirstName();
    std::string getAddress();
    std::string getCity();
    std::string getState();
    std::string getZip();
    std::string getPhone();

};


#endif //HW5_PERSONDATA_H
