//
// Created by Ronald Tran on 2019-04-25.
//

#ifndef UNIT_TESTING_CHECKOUT_H
#define UNIT_TESTING_CHECKOUT_H

#include "pch.h"

class Checkout {
public:
    Checkout();
    virtual ~Checkout();
    void addItemPrice(std::string item, int price);
    void addItem(std::string item);
    void addDiscount(std::string item, int nbrOfItems, int discountPrice);
    int calculateTotal();
protected:
    struct Discount {
        int nbrOfItems;
        int discountPrice;
    };
    std::map<std::string, int> prices;
    std::map<std::string, Discount> discounts;
    std::map<std::string, int> items;
    int total;
    void calculateItem(std::string item, int itemCnt);
    void calculateDiscount(std::string item, int itemCnt, Discount discount);
};

#endif //UNIT_TESTING_CHECKOUT_H
