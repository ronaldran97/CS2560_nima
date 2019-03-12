//
// Created by Ronald Tran on 2019-03-11.
//

#ifndef HOMEWORK4_GAMETWENTYONE_H
#define HOMEWORK4_GAMETWENTYONE_H

#include "Die.h"


class GameTwentyOne {
private:
    int playerScore;
    int computerScore;
    Die die;

public:
    GameTwentyOne();

    void play();
    void reset();


};


#endif //HOMEWORK4_GAMETWENTYONE_H
