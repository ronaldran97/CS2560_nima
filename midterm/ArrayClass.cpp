//
// Created by Ronald Tran on 2019-03-12.
//

#include "ArrayClass.h"

//constructor
ArrayClass::ArrayClass(int number) {

    //sets size to the number chosen
    size = number;

    //declares ArrayClass of doubles of the size of "size"
    newArray = new double[size];

    //creates the ArrayClass with the size in mind
    for (int i = 0; i < size; i++) {
        newArray[i] = 0;
    }

}


//destructor will delete what is in the ArrayClass
ArrayClass:: ~ArrayClass() {
    delete [] newArray;
}

//gets the number
void ArrayClass::setElement(int i, double j) {
    newArray[i] = j;
}


double ArrayClass::gethighest()
{
    double highest = newArray[0];
    for (int i = 1; i < size; i++)
        if (newArray[i] > highest)
            highest = newArray[i];
    return highest;
}

double ArrayClass::getLowest() {
    double Lowest = newArray[0];
    for (int i = 1; i < size; i++)
        if (newArray[i] < Lowest)
            Lowest = newArray[i];
    return Lowest;

}



