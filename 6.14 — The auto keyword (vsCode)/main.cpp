#include <iostream>
#include "first.h"

int main()
{
    std::cout << "Hello Ania\n";

    /*--------------------------------------
    Type inference for initialized variables
    --------------------------------------*/

     //for example:

     auto d { 5.0 };// 5.0 is a double literal, so d will be type double
     auto i { 1 + 2 };// 1 + 2 evaluates to an int, so i will be type int

     auto sum { add(d , i) };// add() returns an int, so sum's type will be deduced to int

     std::cout << d << " + " << i << " = " << sum << '\n';

    /*--------------------------------------
    Type inference for functions
    --------------------------------------*/

    std::cout << subtraction(10, 7) << '\n';
    /*
    Best practice:

    Avoid using type inference for function return types.
    */

    /*--------------------------------------
    Trailing return type syntax
    --------------------------------------*/

    /*
    auto add(int x, int y) -> int;
    auto divide(double x, double y) -> double;
    auto printSomething() -> void;
    auto generateSubstring(const std::string &s, int start, int len) -> std::string;
    */

    return 0;
}