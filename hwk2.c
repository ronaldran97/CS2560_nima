int main() {

    // Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
    // The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax.
    // Display the meal cost, tax amount, tip amount, and total bill on the screen.

    double mealCharge = 88.67;
    double tax = mealCharge * .0675;
    double tip = (mealCharge + tax) * .20;
    double bill = mealCharge + tax + bill;

    printf("Problem 1:\n");
    printf("Cost of the meal:  %.2f\n",mealCharge);
    printf("Tax:  %.2f\n", tax);
    printf("Tip:  %.2f\n", tip);
    printf("Total Bill:  %.2f\n", bill);
    printf("\n");

    //Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
    //• The number of millimeters higher than the current level that the ocean’s level will be in 5 years
    //• The number of millimeters higher than the current level that the ocean’s level will be in 7 years
    //• The number of millimeters higher than the current level that the ocean’s level will be in 10 years

    double rate = 1.5;
    double fiveYears = 5 * rate;
    double sevenYears = 7 * rate;
    double tenYears = 10 * rate;

    printf("Problem 2:\n");
    printf("In 5 years, the ocean's level will have risen by %.2f millimeters. \n", fiveYears);
    printf("In 7 years, the ocean's level will have risen by %.2f millimeters. \n", sevenYears);
    printf("In 10 years, the ocean's level will have risen by %.2f millimeters. \n", tenYears);
    printf("\n");

    //  Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase:
    //• The number of shares that Joe purchased was 1,000.
    //• When Joe purchased the stock, he paid $45.50 per share.
    //• Joe paid his stockbroker a commission that amounted to 2% of the amount he paid for the stock.
    //  Two weeks later Joe sold the stock. Here are the details of the sale:
    //• The number of shares that Joe sold was 1,000.
    //• He sold the stock for $56.90 per share.
    //• He paid his stockbroker another commission that amounted to 2% of the amount he received for the stock.
    //  Write a program that displays the following information:
    //• The amount of money Joe paid for the stock.
    //• The amount of commission Joe paid his broker when he bought the stock.
    //• The amount that Joe sold the stock for.
    //• The amount of commission Joe paid his broker when he sold the stock.
    //• Display the amount of profit that Joe made after selling his stock and paying the two
    //  commissions to his broker. (If the amount of profit that your program displays is a negative number, then
    //  Joe lost money on the transaction.)

    int numOfShares = 1000;
    double pricePerShare = 45.50;
    double purchasedStock = pricePerShare * numOfShares;
    double firstStockBrokerComission = .02 * purchasedStock;
    double priceSoldStock = 56.90;
    double soldStock = priceSoldStock * numOfShares;
    double secondStockBrokerComission = soldStock * .02;
    double finalStockBrokerComission = firstStockBrokerComission + secondStockBrokerComission;
    double joeProfit = (soldStock - purchasedStock) - finalStockBrokerComission;

    printf("Problem 3:\n");
    printf("Joe paid %.2f for the stock.\n", purchasedStock);
    printf("Joe paid his broker %.2f when he bought the stock\n", firstStockBrokerComission);
    printf("Two weeks later, Joe sold the stock for %.2f.\n", soldStock);
    printf("Joe paid his broker %.2f when he sold the stock\n", secondStockBrokerComission);
    printf("Joe made a profit of %.2f after selling the stock and paying his broker.\n", joeProfit);
    printf("\n");

    //Write a program that uses a loop to display Pattern A below, followed by another loop that displays Pattern B.


    printf("Problem 4:\n");
    printf("\n");
    printf("Pattern A");
    for (int row = 0; row < 11; ++row) {
        for (int column = 0; column < row; ++column) {
            printf("+");
        }
        printf("\n");

    }


    printf("\n");
    printf("Pattern B\n");
    for (int row = 10; row > 0; row--) {
        for (int column = 0; column < row; ++column) {
            printf("+");
        }
        printf("\n");

    }
    return 0;
}

#include <stdio.h>
