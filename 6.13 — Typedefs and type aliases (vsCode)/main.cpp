#include <iostream>

int main()
{
    typedef double distance_t;
    //By convention, typedef names are declared using a “_t” suffix.

    /*
    Quiz time

    Question #1

    Given the following function prototype:

    int printData();

    Convert the int return value to a type alias named error_t. 
    Include both the type alias statement and the updated function prototype.
    */

    //answer:

    using error_t = int;

    error_t printData(); 


    return 0;
}