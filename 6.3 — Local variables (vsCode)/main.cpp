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

    /*-----------------------------------------------
    Local variables have automatic storage duration
    -----------------------------------------------*/
    /*
    'Automatic storage duration', which means they are created at the point of 
    definition and destroyed at the end of the block they are defined in. For example:
    */

    int f { 3 }; // f created and initialized here
    double k { 7.77 }; // k created and initialized here

    /*-------------------------------
    Local variables in nested blocks
    --------------------------------*/
    /*
    Local variables can be defined inside nested blocks. 
    This works identically to local variables in function body blocks:
    */
    /*
    Note that nested blocks are considered part of the scope of the outer block in 
    which they are defined. Consequently, variables defined in the outer block can 
    be seen inside a nested block:
    */

    int o { 7 };// o enters scope and is created here
    {// nested block
        int ee { 77 };// ee enters scope and is created here

        // o and ee are both in scope here
        std::cout << o << " + " << ee << " = " << o + ee << '\n';

    }// ee goes out of scope and is destroyed here

    // ee can not be used here because it is out of scope in this block

    /*-------------------------------
    Local variables have no linkage
    --------------------------------*/

    double abc { 1.23 }; // local variable, no linkage

    {
        double abc { 1.23 };// this identifier abc refers to a different object than the previous abc
    }

    /*----------------------------------------------------
    Variables should be defined in the most limited scope
    ----------------------------------------------------*/

    // do not define f1 here
    {
        // f1 is only used inside this block, so define it here
        int f1 { 33 };
        std::cout << f1 << '\n';
    }
    // otherwise f1 could still be used here, where it's not needed

    /*
    If a variable is needed in an outer block, it needs to be declared in the outer block:
    */

    double oop { 7.77 };// we're declaring oop here because we need it in this outer block later

    {
        int x{};
        std::cin >> x;

        // if we declared oop here, immediately before its actual first use...
        if( x == 4 )
            oop = 4;

    }// ... it would be destroyed here

    std::cout << oop << '\n';// and we need oop to exist here

    /*-------
    Quiz time
    --------*/

    /*
    Question #1

    Write a program that asks the user to enter two integers, one named smaller, the other named larger. 
    If the user enters a smaller value for the second integer, use a block and a temporary variable to 
    swap the smaller and larger values. Then print the values of the smaller and larger variables. 
    Add comments to your code indicating where each variable dies. Note: 
    When you print the values, smaller should hold the smaller input and larger the larger input, 
    no matter which order they were entered in.

    The program output should match the following:

    Enter an integer: 4
    Enter a larger integer: 2
    Swapping the values
    The smaller value is 2
    The larger value is 4
    */

    //my answer:

    std::cout << "Enter two integers, one smaller, other larger:" << '\n';
    int smaller{};
    int larger{};
    std::cout << "smaller: ";
    std::cin >> smaller;
    std::cout << "larger: ";
    std::cin >> larger;

    {
        int smaller_fake { larger };
        int larger_fake { smaller }; 

        if( larger_fake < smaller_fake )
        {
            std::cout << "The smaller value is " << larger_fake << '\n';
            std::cout << "The larger value is " << smaller_fake << '\n';
        }
        else
        {
            std::cout << "The smaller value is " << smaller_fake << '\n';
            std::cout << "The larger value is " << larger_fake << '\n';
        }
    }//variable smaller_fake and larger_fake die here.



    return 0;
}// i and d go out of scope here
// f and k are destroyed here
// o goes out of scope and is destroyed here

