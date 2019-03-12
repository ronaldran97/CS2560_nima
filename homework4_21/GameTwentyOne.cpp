//
// Created by Ronald Tran on 2019-03-11.
//

#include "GameTwentyOne.h"
#include <iostream>

using namespace std;

GameTwentyOne::GameTwentyOne() {
    playerScore = 0;
    computerScore = 0;
}

void GameTwentyOne::play() {
    int exit = 0;   //value for exit, if value is equal to 2 than the game exits
    int userAnswer; //user answer for whether they want to keep playing or not
    bool playerExit = false; //tells whether the game is exiting or not
    int playerRecord = 0;
    int computerRecord = 0;

    do {
        if (computerScore < 22) {
            //the first roll for the computer
            this->die.roll();
            //Records the current score
            this->computerScore += die.getValue();
            this->die.roll();
            this->computerScore += die.getValue();
        }

        cout << "Player score: " << playerScore << endl;
        cout << "Do you want to roll the dice? \n 1. yes \n 2. no" << endl;
        cin >> userAnswer;
        if (userAnswer == 2) {
            return;
        }



        switch (userAnswer) {
            case 1 :
                this->die.roll();
                this->playerScore += die.getValue();
                this->die.roll();
                this->playerScore += die.getValue();

                break;

            case 2 :
                exit = 2;
                playerExit = true;
                break;
        }

        if (playerScore > 21) {
            cout << "You lose!" << "\n" << endl;
            computerRecord++;

            cout << "Player Score: " << playerScore << endl;
            cout << "Computer Score: " << computerScore << "\n \n" << endl;
            cout << "Player Wins: " << playerRecord << endl;
            cout << "Computer Wins: " << computerRecord << "\n" << endl;

            cout << "Do you want to keep playing? \n 1. yes \n 2. no" << endl;
            cin >> userAnswer;
            reset();
            //exit = 2;
        } else if (computerScore > 21) {
            cout << "You win!" << "\n" << endl;
            playerRecord++;

            cout << "Player Score: " << playerScore << endl;
            cout << "Computer Score: " << computerScore << "\n \n" << endl;
            cout << "Player Wins: " << playerRecord << endl;
            cout << "Computer Wins: " << computerRecord << "\n" << endl;

            cout << "Do you want to keep playing? \n 1. yes \n 2. no" << endl;
            cin >> userAnswer;
            reset();
            //exit = 2;
        } //else if ()
    } while (exit != 2);


    if (playerExit) { //playerExit = false by default
        if (playerScore > computerScore && playerScore < 22) {
            cout << "You win!" << endl;
            playerRecord++; //increments the amount of wins for the player

            cout << "Player Score: " << playerScore << endl;
            cout << "Computer Score: " << computerScore << "\n \n" << endl;
            cout << "Player Wins: " << playerRecord << endl;
            cout << "Computer Wins: " << computerRecord << "\n" << endl;

            cout << "Do you want to keep playing? \n 1. yes \n 2. no" << endl;
            cin >> userAnswer;
            reset();
        } else if (computerScore > playerScore && computerScore < 22) {
            cout << "Computer wins!" << endl;
            computerRecord++;   //increments the amount of wins for the computer

            cout << "Player Score: " << playerScore << endl;
            cout << "Computer Score: " << computerScore << "\n \n" << endl;
            cout << "Player Wins: " << playerRecord << endl;
            cout << "Computer Wins: " << computerRecord << "\n" << endl;

            cout << "Do you want to keep playing? \n 1. yes \n 2. no" << endl;
            cin >> userAnswer;
            reset();

        }
    }

    if (playerScore == computerScore) {
        cout << "It's a tie!" << endl;
        cout << "Do you want to keep playing? \n 1. yes \n 2. no" << endl;
        cin >> userAnswer;
        reset();
    }

    cout << "Player Score: " << playerScore << endl;
    cout << "Computer Score: " << computerScore << "\n \n" << endl;
    cout << "Player Wins: " << playerRecord << endl;
    cout << "Computer Wins: " << computerRecord << "\n" << endl;
}

//resets the player and computer's scores back to 0
void GameTwentyOne::reset() {
        playerScore = 0;
        computerScore = 0;
}



