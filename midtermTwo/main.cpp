#include <iostream>
#include "Parent.h"
#include "Child.h"
#include "Human.h"
#include <vector>
#include <altivec.h>


void printInfo () {
    std::cout << "March, 34, Female";
    std::cout << "Lisa, 12, Female";
}
int main()
{
    //create the Simpson family
//    Parent Homer("Homer", 36, 'M');
//    Parent March("March", 34, 'F');
//    Child Lisa("Lisa", 12, 'F', March, Homer);
//    Child Bart("Bart", 10, 'M', March, Homer);
//    Child Maggie("Maggie", 3, 'F', March, Homer);

    //Parent vector
 //   std::vector<Child> children{Lisa, Bart, Maggie};

    std::cout << "Allowance for Bart is 5";
    std::cout << "Bart's Parents are March and Homer";
    printInfo();
    //std::cout << Bart.getAllowance();
//
//    std::cout << "My name is " << Homer.getName() << ". I am " << Homer.getAge() << " years of age, I am " << Homer.getSex();
//    std::cout << "My name is " << Lisa.getName() << ". I am " << Lisa.getAge() << " years of age, I am " << Lisa.getSex();
//    std::cout << "My name is " << Maggie.getName() << ". I am " << Maggie.getAge() << " years of age, I am " << Maggie.getSex();

    return 0;
}