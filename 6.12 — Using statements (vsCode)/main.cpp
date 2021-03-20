#include <iostream>

int main()
{
    /*----------------
    Using declarations
    -----------------*/
    /*
    One way to simplify things is to utilize a using declaration statement.

    Here’s our Hello world program, with a using declaration on line 5:
    */

    using std::cout; // this using declaration tells the compiler that cout should resolve to std::cout

    cout << "Hello Wold\n"; // so no std:: prefix is needed here!

    /*------------------
    The using directive
    ------------------*/
    /*
    Another way to simplify things is to use a using directive statement. 
    Here’s our Hello world program again, with a using directive on line 5:
    */

    using namespace std;// this using directive tells the compiler that we're using 
                        //everything in the std namespace!

    cout << "Hello World again\n";// so no std:: prefix is needed here!






    return 0;
}// the using declaration expires here (from: Using declarations)