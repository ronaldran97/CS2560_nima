#include <iostream>
#include "Date.h"
#include <string>
using namespace std;
/*
 *
 * Modify the Date class in Programming Challenge 1 of Chapter 13. The new version
 * should have the following overloaded operators:
 * ++ Prefix and postfix increment operators. These operators should increment the
 * object's day member.
−− Prefix and postfix decrement operators. These operators should decrement the
object's day member.
− Subtraction operator. If one Date object is subtracted from another, the operator should give the number of days
 between the two dates. For example, if April 10, 2014 is subtracted from April 18, 2014, the result will be 8.
<< cout’s stream insertion operator. This operator should cause the date to be dis- played in the form
April 18, 2014
>> cin’s stream extraction operator. This operator should prompt the user for a date
to be stored in a Date object.
The class should detect the following conditions and handle them accordingly:
• When a date is set to the last day of the month and incremented, it should become the first day of the following month.
• When a date is set to December 31 and incremented, it should become January 1 of the following year.
• When a day is set to the first day of the month and decremented, it should become the last day of the previous month.
• When a date is set to January 1 and decremented, it should become December 31 of the previous year.
Demonstrate the class’s capabilities in a simple program.
Input Validation: The overloaded >> operator should not accept invalid dates. For example, the date 13/45/2014 should
 not be accepted.
 */

//
//Design a class called Date. The class should store a date in three integers: month, day, and year. There should be
// member functions to print the date in the following forms:
//12/25/2014 December 25, 2014 25 December 2014
//
//Demonstrate the class by writing a complete program implementing it.
//Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept values for the month
// greater than 12 or less than 1.


int main() {


    int userMonth1;	    // local variable for month
    int userDay1;		// local variable for day
    int userYear1;		// local variable for year
    int userMonth2;	    // local variable for month
    int userDay2;		// local variable for day
    int userYear2;		// local variable for year

    Date dateOne = Date(5, 12, 2020);
    Date dateTwo = Date(6, 24, 2020);

    dateOne.format1();
    dateOne.format2();
    dateOne.format3();

    dateOne.operator++();
    dateOne.operator--();

    dateTwo.format1();
    dateTwo.format2();
    dateTwo.format3();

    //Date dateOne.format1();

    cout << dateOne.operator-(dateTwo);



/****************************************************
 * old work
 */
//    // get the date of the event from the user
//    do {
//        cout << "Enter the month number: ";
//        cin >> userMonth1;
//    } while (userMonth1 > 12 || userMonth1 < 1);
//
//    do {
//        cout << "Enter the Day number: ";
//        cin >> userDay1;
//    } while (userDay1 < 1 || userDay1 > 31);
//
//    cout << "Enter the year number: ";
//    cin >> userYear1;
//
//
//    //create a Date object and store the month, day, and year in the myEvent object (using constructor)
//    Date myEvent(userDay1, userMonth1, userYear1);
//    Date myEvent2(userDay2, userMonth2, userYear2);
//
//    cout << dateOne.operator-(dateTwo);

    // display the data in myEvent
//    cout << "The date of your event first event is:\n";
//
//
//    myEvent.format1();
//    myEvent.format2();
//    myEvent.format3();
//
//    // get the date of the event from the user
//    do {
//        cout << "Enter the month number: ";
//        cin >> userMonth2;
//    } while (userMonth2 > 12 || userMonth2 < 1);
//
//    do {
//        cout << "Enter the Day number: ";
//        cin >> userDay2;
//    } while (userDay2 < 1 || userDay2 > 31);
//
//    cout << "Enter the year number: ";
//    cin >> userYear2;
//
//    cout << "The date of your event second event is:\n";
//    myEvent2.format1();
//    myEvent2.format2();
//    myEvent2.format3();
//
//
//
//    myEvent.operator++();
//    cout << myEvent;
//    myEvent.operator--();
//    cout << myEvent;
//
//
//    myEvent2.operator++();
//    cout << myEvent2;
//    myEvent.operator--();
//    cout << myEvent2;


    return 0;
}