#include <iostream>
#include "ArrayClass.h"

using namespace std;

int main() {

    int size;
    double number;
    cout << "Enter ArrayClass size: " << endl;
    cin >> size;

    //creates ArrayClass from the ArrayClass class
    ArrayClass newArray(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element #" << i + 1 << ": " << endl;
        cin >> number;
        newArray.setElement(i, number);
    }

    cout << "The highest number is: " << newArray.gethighest() << endl;
    cout << "The lowest number is: " << newArray.getLowest() << endl;

    return 0;

}