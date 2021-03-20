#include <iostream>

int main()
{
    std::cout << "Jesus answered, “I am the way and the truth and the life. No one comes to the Father except through me." << '\n';

    /*------------------
    Scope summary
    -------------------*/

    /*
    An identifier’s scope determines where the identifier can be accessed within the source code.

    Variables with block scope / local scope can only be accessed within the block in which they are 
    declared (including nested blocks). This includes:
    -Local variables
    -Function parameters
    -User-defined type definitions (such as enums and classes) declared inside a block

    Variables and functions with global scope / file scope can be accessed anywhere in the file. 
    This includes:
    -Global variables
    -Functions
    -User-defined type definitions (such as enums and classes) declared inside a namespace or in 
     the global scope
    */

    /*------------------
    Duration summary
    -------------------*/

    /*
    A variable’s duration determines when it is created and destroyed.

    Variables with automatic duration are created at the point of definition, and 
    destroyed when the block they are part of is exited. This includes:
    -Local variables
    -Function parameters

    Variables with static duration are created when the program begins and 
    destroyed when the program ends. This includes:
    -Global variables
    -Static local variables

    Variables with dynamic duration are created and destroyed by programmer request. This includes:
    -Dynamically allocated variables
    */

    /*------------------
    Linkage summary
    -------------------*/

    /*
    An identifier’s linkage determines whether multiple declarations of an identifier refer to 
    the same identifier or not.

    An identifier with no linkage means the identifier only refers to itself. This includes:
    -Local variables
    -User-defined type definitions (such as enums and classes) declared inside a block

    An identifier with internal linkage can be accessed anywhere within the file it is declared. 
    This includes:
    -Static global variables (initialized or uninitialized)
    -Static functions
    -Const global variables
    -Functions declared inside an unnamed namespace
    -User-defined type definitions (such as enums and classes) declared inside an unnamed namespace

    An identifier with external linkage can be accessed anywhere within the file it is declared, or 
    other files (via a forward declaration). This includes:
    -Functions
    -Non-const global variables (initialized or uninitialized)
    -Extern const global variables
    -Inline const global variables
    -User-defined type definitions (such as enums and classes) declared inside a namespace or in 
    the global scope
    */

    /*--------------------------------------------
    Variable scope, duration, and linkage summary
    ---------------------------------------------*/
    //Because variables have scope, duration, and linkage, let’s summarize in a chart:

    //Go see: https://www.learncpp.com/cpp-tutorial/scope-duration-and-linkage-summary/


    return 0;
}