//
// Created by Ronald Tran on 2019-03-26.
//

#include "CustomerData.h"
#include <iostream>

CustomerData::CustomerData() : PersonData()
{
    customerNumber = 0;
    mailingList = false;    //It will be set to true if the customer wishes to be on a mailing list, or
    // false if the customer does not wish to be on a mail- ing list
}

CustomerData::CustomerData(std::string newLastName, std::string newFirstName, std::string newAddress,
                           std::string newCity, std::string newState, std::string newZip, std::string newPhone,
                           int newCustomerNumber, bool newMailingList) : PersonData(newLastName, newFirstName,
        newAddress, newCity, newState, newZip, newPhone)
{
    customerNumber = newCustomerNumber;
    mailingList = newMailingList;
}



void CustomerData::setCustomerNumber(int newCustomerNumber)
{
    customerNumber = newCustomerNumber;
}

void CustomerData::setMailingList(bool newMailingList)
{
    mailingList = newMailingList;
}

int CustomerData::getCustomerNumber()
{
    return customerNumber;
}

bool CustomerData::getMailingList()
{
    mailingList = true;
    return mailingList;
}
