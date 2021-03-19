#include <iostream>
#include "first.h"

    /*--------------------
    Static local variables
    --------------------*/

    /*
    The easiest way to show the difference between automatic duration and 
    static duration variables is by example:
    */

    //Automatic duration (default):

    void incrementAndPrint_Automatic_Duration()
    {
        int value { 1 };// automatic duration by default
        ++value;
        std::cout << value << '\n';
    }// value is destroyed here


    /*
    Now consider the static version of this program. 
    The only difference between this and the above program is that we’ve changed 
    the local variable from automatic duration to static duration by using the static keyword.
    Static duration (using static keyword):
    */

    void incrementAndPrint_incrementAndPrint_Static_Duration()
    {
        static int s_value { 1 };//static duration via static keyword.This initializer is only executed once.
        ++s_value;
        std::cout << s_value << '\n';
    }//s_value is not destroyed here, but becomes inaccessible because it goes out of scope

int main()
{   
    std::cout << "Hello World\n";

    incrementAndPrint_Automatic_Duration();
    incrementAndPrint_Automatic_Duration();
    incrementAndPrint_Automatic_Duration();


    incrementAndPrint_incrementAndPrint_Static_Duration();
    incrementAndPrint_incrementAndPrint_Static_Duration();
    incrementAndPrint_incrementAndPrint_Static_Duration();

    generateID();
    generateID();
    generateID();
    

    return 0;
}