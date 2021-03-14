#include <iostream>

int value { 5 }; // global variable

int main()
{// outer block

    /*--------------------------
    Shadowing of local variables
    ---------------------------*/

    int apples { 5 };// here's the outer block apples

    {// nested block

        // apples refers to outer block apples here
        std::cout << apples << '\n';// print value of outer block apples

        int apples { 0 }; // define apples in the scope of the nested block

        // apples now refers to the nested block apples
        // the outer block apples is temporarily hidden

        apples = 10;
        // this assigns value 10 to nested block apples, not outer block apples
        std::cout << apples << '\n';// print value of nested block apples

    }// nested block apples destroyed
    
    std::cout << apples << '\n'; // prints value of outer block apples

    /*----------------------------
    Shadowing of global variables
    ----------------------------*/

    /*
    we can use the scope operator (::) with no prefix to tell the compiler we mean 
    the global variable instead of the local variable.
    */

    int value { 7 }; // hides the global variable value
    ++value;// increments local value, not global value

    --(::value);// decrements global value, not local value (parenthesis added for readability)

    std::cout << "local variable value: " << value << '\n';
    std::cout << "global variable value: " << ::value << '\n';

    /*----------------------
    Avoid variable shadowing
    ----------------------*/

    /*
    Shadowing of local variables should generally be avoided, as it can lead to 
    inadvertent errors where the wrong variable is used or modified. Some compilers will 
    issue a warning when a variable is shadowed.

    For the same reason that we recommend avoiding shadowing local variables, we recommend avoiding 
    shadowing global variables as well. This is trivially avoidable if all of your global names use 
    a “g_” prefix.
    */

    return 0;
}// outer block apples destroyed
// local value is destroyed