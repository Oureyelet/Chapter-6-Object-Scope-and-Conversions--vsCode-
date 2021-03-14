#include <iostream>
#include "first.h"

int main()
{
    /*------------------------------------
    Global variables with internal linkage
    ------------------------------------*/

    /*
    Internal global variables definitions:
    static int g_x;          // defines non-initialized internal global variable (zero initialized by default)
    static int g_x{ 1 };     // defines initialized internal global variable
 
    const int g_y { 2 };     // defines initialized internal global const variable
    constexpr int g_y { 3 }; // defines initialized internal global constexpr variable
 
    Internal function definitions:
    static int foo() {};     // defines internal function
    */

    std::cout << add(3, 4) << '\n';

    return 0;
}