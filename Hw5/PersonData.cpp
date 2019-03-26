//
// Created by Ronald Tran on 2019-03-26.
//

#include "PersonData.h"


PersonData::PersonData()
{
    lastName = "";
    firstName = "";
    address = "";
    city = "";
    state = "";
    zip = "";
    phone = "";
}

PersonData::PersonData(std::string newLastName, std::string newFirstName, std::string newAddress, std::string newCity,
                       std::string newState, std::string newZip, std::string newPhone)
{
    newLastName = lastName;
    newFirstName = firstName;
    newAddress = address;
    newCity = city;
    newState = state;
    newZip = zip;
    newPhone = phone;
}

void PersonData::setLastName(std::string newLastName)
{
    lastName = newLastName;
}

void PersonData::setFirstName(std::string newFirstName)
{
    firstName = newFirstName;
}

void PersonData::setAddress(std::string newAddress)
{
    address = newAddress;
}

void PersonData::setCity(std::string newCity)
{
    city = newCity;
}

void PersonData::setState(std::string newState)
{
    state = newState;
}

void PersonData::setZip(std::string newZip)
{
    zip = newZip;
}

void PersonData::setPhone(std::string newPhone)
{
    phone = newPhone;
}

std::string PersonData::getLastName()
{
    return lastName;
}

std::string PersonData::getFirstName()
{
    return firstName;
}

std::string PersonData::getPhone()
{
    return phone;
}

std::string PersonData::getZip()
{
    return zip;
}

std::string PersonData::getState()
{
    return state;
}

std::string PersonData::getCity()
{
    return city;
}

std::string PersonData::getAddress()
{
    return address;
}

