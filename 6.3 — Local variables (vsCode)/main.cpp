#include <iostream>
#include "first.h"

int main()
{
    std::cout << "Hello World\n";


    /*------------------------------
    Local variables have block scope
    --------------------------------*/

    int i { 5 }; // i enters scope here
    double d { 4.0 }; // d enters scope here

    std::cout << max(100, 12) << '\n';


    return 0;
}// i and d go out of scope here

