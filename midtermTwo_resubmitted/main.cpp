#include <iostream>
#include "Parent.h"
#include "Child.h"
#include "Human.h"

void printInfo (Human &human) {
    std::cout<< "Name: " << human.getName() << std::endl;
    std::cout<< "Age: " << human.getAge() << std::endl;
    std::cout<< "Sex: " << human.getSex() << std::endl;

}
int main()
{
    //parents
    Parent Homer("Homer", 36, 'M');
    Parent March("March", 34, 'F');
    //kids
    Child Bart = Child("Bart", 10, 'M', "March", "Homer");
    Child Lisa = Child("Lisa", 12, 'F', "March", "Homer");
    Child Maggie = Child("Maggie", 3, 'F', "March", "Homer");

    March.setChild(Bart);
    March.setChild(Lisa);
    March.setChild(Maggie);
    Homer.setChild(Bart);
    Homer.setChild(Lisa);
    Homer.setChild(Maggie);

    std::cout << "Allowance: " <<std::endl;
    Bart.getAllowance(); //print allowance
    Homer.setChildAllowance(5, Bart); //5 is how much allowance
    Bart.getAllowance(); //should be 5 now
    Bart.printParents(); // child prints out all parents

    printInfo(Maggie);
    printInfo(Lisa);

    //std::cout << Bart.getAllowance();
    return 0;
}