#include <iostream>
#include "first.h"

using namespace std;

int main()
{ // start block

    // multiple statements

    int x{}; // this is initialization, not a block
    hello_message(); 
    cout << add(777,777) << '\n';

    /*------------------------
    Blocks inside other blocks
    -------------------------*/

    // Functions can’t be nested inside other functions.

    // Blocks can be nested inside other blocks:
        { // inner/nested block
            cout << add(77,77) << '\n';
        } // end inner/nested block
        /*
        When blocks are nested, the enclosing block is typically called the 'outer block' and 
        the enclosed block is called the 'inner block' or 'nested block'.
        */

    /*-------------------------------------------------------
    Using blocks to execute multiple statements conditionally
    -------------------------------------------------------*/

    //One of the most common use cases for blocks is in conjunction with if statements.

    cout << "Enter an integer: ";
    int value {};
    cin >> value;

    if (value >= 0)
    { // start of nested block
        cout << value << " is a positive integer (or zero)\n";
        cout << "Double this number is " << value * 2 << '\n';
    } // end of nested block
    else
    { // start of another nested block
        cout << value << " is a negative integer\n";
        cout << "The positive of this number is " << -value << '\n';
    } // end of another nested block
    
    /*------------------
    Block nesting levels
    -------------------*/

    cout << "Enter an integer: ";
    int value_2{};
    cin >> value_2;

    if( value_2 > 0 )
    {// nesting lvl 1

        if( (value_2 % 2) == 0 )
        {//nesting lvl 2

            cout << value_2 << " is positive and even \n"; 

        }

        else
        {//also nesting lvl 3

            cout << value_2 << " is positive and odd \n";

        }


    }
    /* 
    Best practice is keep the nesting level of your functions to 3 or less.
    If your function has a need for more, consider refactoring.
    */


    return 0;
}// end block (no semicolor)