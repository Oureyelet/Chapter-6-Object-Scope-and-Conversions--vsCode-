#include <iostream>
#include "constants.h"// include a copy of each constant in this file

int main()
{
    std::cout << "Hello World\n";

    /*
    Best practice:
    If you need global constants and your compiler is C++17 capable, 
    prefer defining inline constexpr global variables in a header file.
    */

    /*--------------------------------------
    Global constants as inline variables
    ---------------------------------------*/

    /*
    There are multiple ways to facilitate this within C++. Pre-C++17, 
    the following is probably the easiest and most common:
    1) Create a header file to hold these constants
    2) Inside this header file, define a namespace (discussed in lesson 6.2 -- User-defined namespaces)
    3) Add all your constants inside the namespace (make sure they’re inline constexpr)
    4) #include the header file wherever you need it
    */

    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2.0 * radius * constants::pi << '\n';

    return 0;
} 