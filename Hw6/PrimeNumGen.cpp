//
// Created by Ronald Tran on 2019-04-09.
//

/**
 A positive integer greater than 1 is said to be prime if it has no divisors other than 1 and itself. A positive
 integer greater than 1 is composite if it is not a prime. Write a program that asks the user to enter an integer
 greater than 1, then displays all of the prime numbers that are less than or equal to the number entered. The
 program should work as follows:
        Once the user has entered a number, the program should populate a vector with all of the integers from 2,
            up through the value entered.
        The program should then use the STL’s for_each function to step through the vector.
        The for_each function should pass each element to a function object that displays the element
        if it is a prime number.

 */
#include <iostream>
#include <vector>

void print(std::vector <int> const &a) {
    std::cout << "The vector elements are : " << std::endl;

    for(int i=0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}

void printName(int name)
{
    std::cout << name << std::endl;
}

int main(){
    int userInteger;

    std::vector<int> primeNums; //vector dec
    std::cout << "Enter an integer greater than 1: " << std::endl;
    std::cin >> userInteger;


    for (int i = 2; i < userInteger; i++) {
        bool isPrime = true;    //used to dtermine prime validity
        for (int j = 0; j < primeNums.size() && primeNums[j] * primeNums[j] <= i; j++) {

            //prime check
            if (i % primeNums[j] == 0) {
                isPrime = false;
                break;
            }
        }

        //adds prime number to back of vector
        if (isPrime) {
            primeNums.push_back(i);
        }
    }
    std::for_each(primeNums.begin(),primeNums.end(),printName);
    return 0;
}


////    for (int i=2; i< userInteger; i++)
////        for (int j=2; j<i; j++)
////        {
////            if (i % j == 0)
////                break;
////            else if (i == j+1)
////                std::cout << i << " ";
