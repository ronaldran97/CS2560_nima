#include "Date.h"
#include <string>
using namespace std;

Date::Date(int month, int day, int year){

    if (month <= 12 && month >= 1) {
        hmonths = month;

    }
    else {
        hmonths = 0;
        cout << "That isn't a proper month.\n";
    }

    if (day <= numDaysinMon(hmonths) && day >= 1) {
        hdays = day;
    }
    else {
        hdays = 0;
        cout << "That isn't a proper day.\n";
    }
    hyears = year;
}

void Date::operator ++ () {
    hdays += 1;
    if (hdays > numDaysinMon(hmonths)) {
        hmonths += 1;
        hdays = 1;
    }
    if(hmonths == 12 && hdays == 32) {
        hmonths = 1;
        hdays = 1;
        hyears += 1;
    }
}

void Date::operator -- () {
    hdays -= 1;
    if (hdays <= 0) {
        hmonths -= 1;
        hdays = numDaysinMon(hmonths);
    }
    if (hmonths == 1 && hdays == 0) {
        hmonths = 12;
        hdays = 31;
        hyears -= 1;
    }
}
int Date::operator - (Date &secDate) {
    int result = 0;
    int date_in_days = hdays;
    int other_date_in_days = secDate.hdays;
    hmonths--;
    secDate.hmonths--;
    while (hmonths > 0 || secDate.hmonths > 0) {
        if (hmonths > 0) {
            date_in_days += numDaysinMon(hmonths);
            hmonths--;
        }
        if (secDate.hmonths > 0) {
            other_date_in_days += numDaysinMon(secDate.hmonths);
            secDate.hmonths--;
        }
    }
    date_in_days += (hyears) * 365;
    other_date_in_days += (secDate.hyears) * 365;
    result = date_in_days - other_date_in_days;
    return result;
}

ostream &operator << (ostream &output, Date date) {
    date.format2();
    return output;
}

istream &operator >> (istream &input, Date &date) {
    int temp_day = 0;
    int temp_month = 0;
    bool cday = false;
    bool cMonth = false;
    while (cMonth)
        input >> temp_month;
        if (temp_month <= 12 && temp_month >= 1) {
            date.hmonths = temp_month;
            cMonth = true;
        }
        else {
            date.hmonths = 0;
            cout << "That isn't a proper month, try again.\n";
        }

    while (cday)
        input >> temp_day;
        if (temp_day <= date.numDaysinMon(date.hmonths) && temp_day >= 1) {
            date.hdays = temp_day;
            cday = true;
        }
        else {
            date.hdays = 0;
            cout << "That isn't a proper day, try again.\n";
        }

    input >> date.hyears;

    return input;
}

void Date::format1() {
    cout << hmonths << "/" << hdays << "/" << hyears << "\n";
}

void Date::format2() {
    cout << nameOfMonth(hmonths) << " " << hdays << ", " << hyears << "\n";
}

void Date::format3() {
    cout << hdays << " " << nameOfMonth(hmonths) << " " << hyears << "\n";
}

string Date::nameOfMonth(int month) {
    string month_name = "";
    switch (month) {
        case 1:
            month_name = "January";
            break;
        case 2:
            month_name = "February";
            break;
        case 3:
            month_name = "March";
            break;
        case 4:
            month_name = "April";
            break;
        case 5:
            month_name = "May";
            break;
        case 6:
            month_name = "June";
            break;
        case 7:
            month_name = "July";
            break;
        case 8:
            month_name = "August";
            break;
        case 9:
            month_name = "September";
            break;
        case 10:
            month_name = "October";
            break;
        case 11:
            month_name = "November";
            break;
        case 12:
            month_name = "December";
            break;
        default:
            break;
    }
    return month_name;
}

int Date::numDaysinMon(int month) {
    int month_days = 0;
    switch (month) {
        case 1:
            month_days = 31;
            break;
        case 2:
            month_days = 28;
            break;
        case 3:
            month_days = 31;
            break;
        case 4:
            month_days = 30;
            break;
        case 5:
            month_days = 31;
            break;
        case 6:
            month_days = 30;
            break;
        case 7:
            month_days = 31;
            break;
        case 8:
            month_days = 31;
            break;
        case 9:
            month_days = 30;
            break;
        case 10:
            month_days = 31;
            break;
        case 11:
            month_days = 30;
            break;
        case 12:
            month_days = 31;
            break;
    }
    return month_days;
}