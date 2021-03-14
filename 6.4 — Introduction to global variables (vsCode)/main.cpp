#include <iostream>
#include "first.h"

int main()
{
    std::cout << "Hello World\n";

    /*------------------------------------
    Declaring and naming global variables
    ------------------------------------*/
    doSomething();
    std::cout << g_x * 77 << '\n';

    // global variables can be seen and used everywhere in the file
    g_x = 77;
    std::cout << g_x << '\n';

    /*
    Consider using a “g” or “g_” prefix for global variables to help 
    differentiate them from local variables.
    */

    /*----------------------------
    Global variable initialization (go see to first.cpp)
    -----------------------------*/

    /*-----------------------
    Constant global variables (go see to first.cpp)
    ------------------------*/
    doSomething2();

    return 0;
}
// g_x goes out of scope here