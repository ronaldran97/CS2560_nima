//
// Created by Ronald Tran on 2019-03-11.
//

#ifndef HOMEWORK4_DICE_H
#define HOMEWORK4_DICE_H


class Die {
private:
    int sides;  //number of sides
    int value;  //die's value

public:
    Die(int = 6);   // Constructor
    void roll();    // Rolls the die
    int getSides(); // Returns the number of sides
    int getValue(); // Returns the die's value


};


#endif //HOMEWORK4_DICE_H
