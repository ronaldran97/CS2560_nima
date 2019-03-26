//
// Created by Ronald Tran on 2019-03-26.
//

#ifndef HW5_CUSTOMERDATA_H
#define HW5_CUSTOMERDATA_H


#include "PersonData.h"

class CustomerData : public PersonData {
private:
    int customerNumber; //unique int for everyone
    bool mailingList;   //whether or not customer wants to be on the mailing list
public:
    CustomerData();     //default constructor
    CustomerData(std::string newLastName, std::string newFirstName,
                 std::string newAddress, std::string newCity, std::string newState,
                 std::string newZip, std::string newPhone, int newCustomerNumber, bool newMailingList);
    void setCustomerNumber(int newCustomerNumber);
    void setMailingList(bool newMailingList);
    int getCustomerNumber();
    bool getMailingList();
};


#endif //HW5_CUSTOMERDATA_H
