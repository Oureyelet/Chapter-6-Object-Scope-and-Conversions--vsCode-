#include <iostream>

    /*--------------------------------------------
            Unnamed (anonymous) namespaces
    ---------------------------------------------*/

    namespace// unnamed namespace
    {
        void doSomething()// can only be accessed in this file
        {
            std::cout << "v1\n";
        }
        
    }
    /*
    Unnamed namespaces are typically used when you have a lot of content that 
    you want to ensure stays local to a given file.
    */

int main()
{
    std::cout << "Hello World" << '\n';

    doSomething();// we can call doSomething() without a namespace prefix

    /*--------------------------------------------
                   Inline namespaces
    ---------------------------------------------*/
    /*
    Go see https://www.learncpp.com/cpp-tutorial/unnamed-and-inline-namespaces/.
    */
    



    return 0;
}