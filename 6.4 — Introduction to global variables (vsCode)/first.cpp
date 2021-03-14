#include <iostream>

    /*
    By convention, global variables are declared at the top of a file, 
    below the includes, but above any code. Here’s an example of a global 
    variable being defined:
    */

// Variables declared outside of a function are global variables
int g_x{}; // global variable g_x

void doSomething()
{
    // global variables can be seen and used everywhere in the file
    g_x = 3;
    std::cout << g_x << '\n';
}

    /*----------------------------
    Global variable initialization
    -----------------------------*/
    //Non-constant global variables can be optionally initialized:
    int g_y;// no explicit initializer (zero-initialized by default)
    int g_z{};// zero initialized
    int g_v { 1 };// initialized with value

    /*-----------------------
    Constant global variables
    ------------------------*/

    //constant global variables must be initialized:

    //const int g_OP; // error: constant variables must be initialized
    //constexpr int g_OP2; // error: constexpr variables must be initialized

    const int c_OP3 { 1 };// const global variable c_OP3, initialized with a value
    constexpr int c_e_OP3 { 2 }; // constexpr global variable c_e_OP3, initialized with a value

void doSomething2()
{
    // global variables can be seen and used everywhere in the file
    std::cout << c_e_OP3 << '\n';
    std::cout << c_OP3 << '\n';
}