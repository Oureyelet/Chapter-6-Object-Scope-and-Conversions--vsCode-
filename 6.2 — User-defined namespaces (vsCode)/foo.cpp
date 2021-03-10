#include <iostream>

// This doSomething() function adds the value of its parametrs
int doSomething(int x, int y)
{
    return x + y;
}

namespace foo // define namespace named foo
{
    int doSomething(int x, int y) // This function doSomething () multiplies the value of its parameters 
    {
        return x * y;
    }
}

void hello_message()
{
    std::cout << "Hello Ania!" << '\n'; //this print lives in the global namespace
}