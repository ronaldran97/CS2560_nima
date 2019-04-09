//
// Created by Ronald Tran on 2019-04-09.
//

/**
 * Minimum/Maximum Templates
 Write templates for the two functions minimum and maximum. The minimum function should accept two arguments and
 return the value of the argument that is the lesser of the two. The maximum function should accept two arguments and
 return the value of the argument that is the greater of the two. Design a simple driver program that demonstrates the
 templates with various data types.
 */

#include <iostream>

/**
 * The minimum function should accept two arguments and
 * return the value of the argument that is the lesser of the two.
 */
template <typename T>
T Min(T num1, T num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}


/**
 * The maximum function should accept two arguments and
 * return the value of the argument that is the greater of the two.
 */
template <typename T>
T Max(T num1, T num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int int1, int2;
    double double1, double2;
    std::string char1, char2;

    // Ask to enter integers
    std::cout << "Enter two integer values: " << std::endl;
    std::cin  >> int1 >> int2;
    // Call min and max templates using integer data types
    std::cout << "Less Than: " <<  Min(int1, int2) << std::endl;
    std::cout << "Greater Than: " << Max(int1, int2) << std::endl;

    // Ask to enter doubles
    std::cout << "Enter two float values:\n";
    std::cin  >> double1 >> double2;
    // Call min and max templates using double data types
    std::cout << "Less Than: " << Min(double1, double2) << std::endl;
    std::cout << "Greater Than: " << Max(double1, double2) << std::endl;

    // Ask user to enter two strings
    std::cout << "Enter two strings values:\n";
    std::cin >> char1 >> char2;
    // Call min and max templates using string data types
    std::cout << "Less Than: " << Min(char1, char2) << std::endl;
    std::cout << "Greater Than: " << Max(char1, char2) << std::endl;

    return 0;
}