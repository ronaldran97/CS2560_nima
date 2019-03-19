//
// Created by Ronald Tran on 2019-03-16.
//

//Design a class called Date. The class should store a date in three integers: month, day, and year. There should be
// member functions to print the date in the following forms:
//
//12/25/2014 December 25, 2014 25 December 2014
//
//Demonstrate the class by writing a complete program implementing it.
//Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept values for the month
// greater than 12 or less than 1.


#ifndef PROJ2_DATE_H
#define PROJ2_DATE_H

#include <iostream>
#include <string>
using namespace std;


class Date {
private:
    int hmonths;
    int hdays;
    int hyears;
public:
    Date(int month, int dday, int year); // copy constructor
    //Date(int d);    //constructor for days
    //Date(); //default constructor

    //mutator functions
    void format1();   //12/25/2014
    void format2();   //December 25, 2014
    void format3();   //25 December 2014
    void incDay();    //increment day
    void decDay();    //decrement day
    string nameOfMonth(int month);
    int numDaysinMon(int month);


    void operator ++();   //overloaded ++
    void operator --();   //overloaded --
    int operator - (Date &secDate); // will give the amoutn of days in between
    friend ostream &operator << (ostream &output, Date date);
    friend istream &operator >> (istream &input, Date &date);






};


#endif //PROJ2_DATE_H
