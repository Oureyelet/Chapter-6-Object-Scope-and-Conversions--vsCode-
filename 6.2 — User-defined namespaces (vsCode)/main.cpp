#include <iostream>
#include "first.h"
#include "circle.h"
#include "growth.h"
#include "add.h" // for basicMath::add()

namespace first_example
{
    namespace second_example
    {
        int subtration(int x, int y)
        {
            return x - y;
        }
    }
}

int main()
{

    std::cout << doSomething_2(4, 3) << '\n'; // which doSomething will we get?
    //One way to resolve this would be to rename one of the functions, so the names no longer collide.

    /*---------------------------
    Defining your own namespaces
    ---------------------------*/

    //Here is an example of the files in the prior example rewritten using namespaces: [see foo.cpp and goo.cpp]

    /*------------------------------------------------------------
    Accessing a namespace with the scope resolution operator (::)
    -------------------------------------------------------------*/

    /*
    Here is an example of using the scope resolution operator to tell the compiler that 
    we explicitly want to use the version of doSomething() that lives in the foo namespace:
    */
    std::cout << foo::doSomething(7, 7) << '\n'; // use the doSomething() that exists in namespace foo
    std::cout << goo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace goo

    /*------------------------------
    Scope resolution with no prefix
    ------------------------------*/

    gospelOfJohn::hello_message(); // call gospelOfJohn::hello_message()
    ::hello_message();//call hello_message() in global namespace (same as just calling hello_message() in this case)

    /*--------------------------------
    Multiple namespace blocks allowed
    --------------------------------*/

    std::cout << basic_Math::pi << '\n';
    std::cout << basic_Math::e << '\n';
    std::cout << basic_Math::add(4, 3) << '\n';
    

    /*----------------
    Nested namespaces
    ----------------*/

    //Namespaces can be nested inside other namespaces. For example:

    std::cout << first_example::second_example::subtration(100, 93) << '\n';

    //Since C++17, nested namespaces can also be declared this way:

    std::cout << first::second::lol::realy::multiplication(7, 7) << '\n';

    /*----------------
    Namespace aliases
    ----------------*/

    /*
    C++ allows you to create 'namespace aliases', which allow us to temporarily shorten a 
    long sequence of namespaces into something shorter:    
    */
    namespace aliases = first::second::lol::realy; // aliases now refers to first::second::lol::realy

    std::cout << aliases::multiplication(101, 101) << '\n'; //This is realy aliases namespace.

    std::cout << "Hello World\n";

    return 0;
}