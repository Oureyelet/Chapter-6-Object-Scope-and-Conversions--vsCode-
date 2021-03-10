#include <iostream>

// This doSomething() function subtracts the value of its parametrs
int doSomething_2(int x, int y)
{
    return x - y;
}

namespace goo // define namespace named goo
{
    int doSomething(int x, int y) // This doSomething() function divide the value of its parametrs
    {
        return x / y;
    }
}

namespace gospelOfJohn
{
    void hello_message()
    {
        std::cout << "Jezus is Lord." << '\n'; // this print lives in the goslepOfJohn namespace
    }
}

