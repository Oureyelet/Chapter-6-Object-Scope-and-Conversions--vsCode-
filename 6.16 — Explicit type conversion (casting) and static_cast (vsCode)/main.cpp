#include <iostream>

int main()
{
    std::cout << "Hello World" << '\n';

    //But what if you are using variables? Consider this case:

    int i1 { 10 };
    int i2 { 4 };
    float f( i1 / i2 );// List initialization would prevent this. 
    //Direct initialization is used for demonstration only.
    /*
    Variable f will end up with the value of 2. 
    How do we tell the compiler that we want to use floating point division instead of integer division? 
    The answer is by using a type casting operator (more commonly called a cast) 
    to tell the compiler to do explicit type conversion. 
    A cast represents a request by the programmer to do an explicit type conversion.
    */

    /*-------------------------------------------------------
                            Type casting
    --------------------------------------------------------*/
    /*
    In C++, there are 5 different types of casts: 

    C-style casts, static casts, const casts, dynamic casts, and reinterpret casts.

    We’ll cover C-style casts and static casts in this lesson. Dynamic casts 
    we’ll save until after we cover pointers and inheritance in future lessons.
    */

    /*-------------------------------------------------------
                            C-style casts
    --------------------------------------------------------*/
    /*
    In standard C programming, casts are done via the () operator,
    with the name of the type to convert the value to placed inside the parenthesis. For example:
    */
    int i3 { 10 };
    int i4 { 4 };
    float f1 { (float)i3 / i4 };
    //In the above program, we use a float C-style cast to tell the compiler to 
    //convert i1 to a floating point value.
    std::cout << f << ' ' << f1 << '\n';

    /*
    Warning:

    Avoid using C-style casts.
    */

    /*-------------------------------------------------------
                            static_cast
    --------------------------------------------------------*/
    /*
    C++ introduces a casting operator called static_cast, which can be used to 
    convert a value of one type to a value of another type.
    */
    //static_cast used to convert a char into an int:

    char c { 'a' };
    std::cout << c << ' ' << static_cast<int>(c) << '\n';// prints a 97

    //Static_cast is best used to convert one fundamental type into another.

    int i5 { 10 };
    int i6 { 4 };

    // convert an int to a float so we get floating point division rather than integer division
    float f2 { static_cast<float>(i5) / i6 };

    /*
    Best practice:

    Favor static_cast when you need to convert a value from one type to another type
    */

    return 0;
}