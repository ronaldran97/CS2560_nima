//
// Created by Ronald Tran on 2019-03-26.
//

#include "PreferredCustomer.h"
#include <iostream>

PreferredCustomer::PreferredCustomer() : CustomerData(){
    purchasesAmount = 0;
    discountLevel = 0;
}

PreferredCustomer::PreferredCustomer(std::string newLastName, std::string newFirstName, std::string newAddress,
                                     std::string newCity, std::string newState, std::string newZip,
                                     std::string newPhone, int newCustomerNumber, bool newMailingList,
                                     double newPurchasesAmount, double newDiscountLevel) : CustomerData(newLastName,
                                             newFirstName, newAddress, newCity, newState, newZip, newPhone,
                                             newCustomerNumber, newMailingList)
{
    purchasesAmount = newPurchasesAmount;
    discountLevel = newDiscountLevel;
}

void PreferredCustomer::determineDiscountLevel() {
    if (purchasesAmount >= 2000)
        discountLevel = 0.10;
    else if (purchasesAmount >= 1500)
        discountLevel = 0.07;
    else if (purchasesAmount >= 1000)
        discountLevel = 0.06;
    else if (purchasesAmount >= 500)
        discountLevel = 0.05;
    else if (purchasesAmount < 0)
        std::cout << "that is not a valid amount. Please run the program again";
        return;
}

void PreferredCustomer::setPurchasesAmount(double newPurchasesAmount)
{
    purchasesAmount = newPurchasesAmount;
}

void PreferredCustomer::setDiscountLevel(double newDiscountLevel)
{
    discountLevel = newDiscountLevel;
}

double PreferredCustomer::getPurchasesAmount()
{
    return purchasesAmount;
    determineDiscountLevel();
}

double PreferredCustomer::getDiscountLevel()
{
    determineDiscountLevel();
    return discountLevel;
}

void PreferredCustomer::addPurchases(double newPurchasesAmount)
{
    purchasesAmount += newPurchasesAmount;
    determineDiscountLevel();

}




