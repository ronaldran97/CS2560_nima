#include <iostream>
#include "CustomerData.h"
#include "PersonData.h"
#include "PreferredCustomer.h"


//PersonData and CustomerData classes
//        Design a class named PersonData with the following member variables:
//• lastName
//• firstName
//• address
//• city
//• state
//• zip
//• phone
//        Write the appropriate accessor and mutator functions for these member variables. Next, design a class
//        named CustomerData, which is derived from the PersonData
//class. The CustomerData class should have the following member variables:
//• customerNumber
//• mailingList
//        The customerNumber variable will be used to hold a unique integer for each customer. The mailingList
//        variable should be a bool. It will be set to true if the customer wishes to be on a mailing list, or false if the customer does not wish to be on a mail- ing list. Write appropriate accessor and mutator functions for these member variables. Demonstrate an object of the CustomerData class in a simple program.
//Programming Challenges 965


//PreferredCustomer Class
//A retail store has a preferred customer plan where customers may earn discounts on all their purchases.
// The amount of a customer’s discount is determined by the amount of the customer’s cumulative purchases in the store.
//• When a preferred customer spends $500, he or she gets a 5% discount on all future purchases.
//• When a preferred customer spends $1,000, he or she gets a 6% discount on all future purchases.
//• When a preferred customer spends $1,500, he or she gets a 7% discount on all future purchases.
//• When a preferred customer spends $2,000 or more, he or she gets a 10% discount on all future purchases.
//Design a class named PreferredCustomer, which is derived from the CustomerData class you created in Programming
// Challenge 7. The PreferredCustomer class should have the following member variables:
//• purchasesAmount (a double) • discountLevel (a double)
//The purchasesAmount variable holds the total of a customer’s purchases to date. The discountLevel variable
// should be set to the correct discount percentage, according to the store’s preferred customer plan. Write appropriate member functions for this class and demonstrate it in a simple program.
//Input Validation: Do not accept negative values for any sales figures.

void actualCustomer(CustomerData customerData) {
    int customerChoice;

    std::cout << "Last Name: " << customerData.getLastName() << "\n";
    std::cout << "First Name: " << customerData.getFirstName() << "\n";
    std::cout << "Address: " << customerData.getAddress() << "\n";
    std::cout << "City: " << customerData.getCity() << "\n";
    std::cout << "State: " << customerData.getState() << "\n";
    std::cout << "Zip: " << customerData.getZip() << "\n";
    std::cout << "Phone: " << customerData.getPhone() << "\n";

    std::cout << "Customer Number: " << customerData.getCustomerNumber() << "\n";
    std::cout << "Would you like to be on the mailing list? \n1. yes \n2. no" << "\n";
    std::cin >> customerChoice;

    if (customerChoice == 1) {
        customerData.getMailingList();
        std::cout << "You have been added to the mailing list!" << "\n";
    } else if (customerChoice == 2) {
        std::cout << "You have not been added to the mailing list" << "\n";
    }

}

int main()
{
    CustomerData myCustomerData = CustomerData();
    CustomerData mySecondCustomerData = CustomerData();
    myCustomerData.setLastName("Devarpanah");
    myCustomerData.setFirstName("Nima");
    myCustomerData.setAddress("123 CalPoly Way");
    myCustomerData.setCity("Pomona");
    myCustomerData.setState("CA");
    myCustomerData.setZip("12345");
    myCustomerData.setPhone("(909)331-3323");
    myCustomerData.setCustomerNumber(123456);
    myCustomerData.setMailingList(false);
    mySecondCustomerData.setLastName("Tran");
    mySecondCustomerData.setFirstName("Ronald");
    mySecondCustomerData.setAddress("21 Jump Street");
    mySecondCustomerData.setCity("Eugene");
    mySecondCustomerData.setState("OR");
    mySecondCustomerData.setZip("925708");
    mySecondCustomerData.setPhone("(714)424-5377");
    mySecondCustomerData.setCustomerNumber(431102);
    std::cout << "Customer 1: \n";
    std::cout << "----------- \n";
    actualCustomer(myCustomerData);
    std::cout << "Customer #2 \n";
    std::cout << "----------- \n";
    actualCustomer(mySecondCustomerData);

    // Create a PreferredCustomer object.
    PreferredCustomer customer;

    // Variable to hold the amount of purchases.
    double purchase;


    // Display the amount of purchases.
    std::cout << "\n \nPurchases amount: $"
         << customer.getPurchasesAmount()
         << "\n";

    // Display the discount level.
    std::cout << "Current discount level: "
         << customer.getDiscountLevel()
         << "\n";

    // Add another purchase.
    std::cout << "Enter an additional purchase amount: ";
    std::cin >> purchase;
    customer.addPurchases(purchase);

    // Display the amount of purchases now.
    std::cout << "Purchases amount: $"
         << customer.getPurchasesAmount()
         << "\n";

    // Display the discount level now.
    std::cout << "Current discount level: "
         << customer.getDiscountLevel()
         << "\n";

    return 0;


    return 0;
}