//
// Created by Ronald Tran on 2019-03-12.
//

#ifndef MIDTERM_ARRAY_H
#define MIDTERM_ARRAY_H


class ArrayClass {
private:
    double *newArray;
    int size;

public:

    //constructor that will take an int
    ArrayClass(int );

    //destructor
    ~ArrayClass();

    //sets element in chosen spot
    void setElement(int, double);

    //gets any number from ArrayClass
    double getAnyNumber(int );

    //stores elements
    void storeElement(int, double);

    //gets highest number
    double gethighest();

    //gets lowest number
    double getLowest();
};


#endif //MIDTERM_ARRAY_H
