//
// Created by Ronald Tran on 2019-04-09.
//

//Using templates with variables
#include <iostream>
//using namespace std;

//typecast based on the type needed by developer.
template<typename T>
T pi = T(3.1415926535897932385L);

template<typename T>
T area_of_circle(const T & r) {
    return r*r * pi<T>;
}

int main()
{
    std::cout.precision(20);        //printout up to 20 decimal places on the console
    std::cout << pi<double> << std::endl;       //float, long double
    std::cout << area_of_circle<double>(3) << std::endl;
    return 0;
}