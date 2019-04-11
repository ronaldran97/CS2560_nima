#include <iostream>

int main() {
    std::string userInput = " ";//initial value for string
    double updatedInput = 0.0;  //after string changed to double
    bool done = false;          //true when score = 0
    int numberOfScores = 0;     //number of scores
    double averageScores = 0.0; //average of scores
    int counter = 0;            //counts the number of scores
    double totalScore = 0.0;

    while (!done) {
        std::cout << "Please enter a testscore: " << std::endl;
        std::cout << "Enter 0 if you are finished" << std::endl;
        std::cin >> userInput;
        updatedInput = stod(userInput);
        done = updatedInput == 0;

        if (!done) {
            totalScore += updatedInput;
            counter ++;
        }
    }
    averageScores = (totalScore/counter);
    std::cout << counter << " scores recorded" << std::endl;
    std::cout << "The average is: " << averageScores;
}