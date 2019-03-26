//
// Created by Ronald Tran on 2019-03-26.
//

#ifndef HW5_PREFERREDCUSTOMER_H
#define HW5_PREFERREDCUSTOMER_H


#include "CustomerData.h"

class PreferredCustomer : public CustomerData {

    /**
     * • purchasesAmount (a double)
     * • discountLevel (a double)
     */

private:
    double purchasesAmount; //holds the total of a customer’s purchases to date
    double discountLevel;   // set to the correct discount percentage, according to the store’s preferred customer plan
public:
    PreferredCustomer();    //default constructor
    PreferredCustomer(std::string newLastName, std::string newFirstName,
                      std::string newAddress, std::string newCity, std::string newState,
                      std::string newZip, std::string newPhone, int newCustomerNumber, bool newMailingList,
                      double newPurchasesAmount, double newDiscountLevel);

    void addPurchases(double newPurchasesAmount);
    void setPurchasesAmount(double newPurchasesAmount);
    void setDiscountLevel(double newDiscountLevel);
    void determineDiscountLevel();
    double getDiscountLevel();
    double getPurchasesAmount();
};


#endif //HW5_PREFERREDCUSTOMER_H
