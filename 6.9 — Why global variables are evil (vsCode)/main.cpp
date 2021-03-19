#include <iostream>
#include "first.h"

int g_mode;// declare global variable (will be zero-initialized by default)

void doSomething()
{
    g_mode = 2; // set the global g_mode variable to 2
}

int main()
{
    std::cout << "Hello World\n";

    /*
    If you were to ask a veteran programmer for one piece of advice on good 
    programming practices, after some thought, the most likely answer would be, 
    “Avoid global variables!”.
    */

    /*
     When developers tell you that global variables are evil, they’re usually 
     not talking about all global variables. They’re mostly talking about non-const global variables.
    */

    /*---------------------------------------
    Why (non-const) global variables are evil
    ----------------------------------------*/

    g_mode = 1; // note: this sets the global g_mode variable to 1.  It does not declare a local g_mode variable!

    doSomething();

    // Programmer still expects g_mode to be 1
    // But doSomething changed it to 2!

    if ( g_mode == 1 )
    {
        std::cout << "No threat detected.\n";
    }
    else
    {
        std::cout << "Launching nuclear missiles...\n";
    }

    /*
    Best practice

    Use local variables instead of global variables whenever possible.
    */

    std::cout << "Gravity is: " << constants::gravity << '\n';


    return 0;
}