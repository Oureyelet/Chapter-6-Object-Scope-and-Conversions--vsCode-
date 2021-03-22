#include <iostream>
#include <typeinfo> // for typeid()

int main()
{

    float f { 3 };// initialize floating point variable with int 3

    /*-----------------------------------------------
                Implicit type conversion
    ------------------------------------------------*/

    //There are two basic types of implicit type conversion: promotions and conversions.

    //  /Numeric promotion:
    long l { 64 };// widen the integer 64 into a long
    double d { 0.12f };// promote the float 0.12 into a double

    //  /Numeric conversions:
    double p { 3 };// convert integer 3 to a double (between different types)
    short s { 2 };// convert integer 2 to a short (from larger to smaller type within same type family)

    int i { 30000 };
    char c = i; // chars have range -128 to 127

    std::cout << static_cast<int>(c) << '\n';//This causes the char to overflow, and produces an unexpected result.

    /*
    However, converting from a larger integral or floating point type to a smaller 
    similar type will generally work so long as the value fits in the range of the smaller type. 
    For example:
    */

    int i2 { 2 };
    short s2 = i2;// convert from int to short
    std::cout << s2 << '\n';

    double d2 { 0.1234 };
    float f2 = d2;
    std::cout << d2 << '\n';
    //This produces the expected result.

    /*-----------------------------------------------
            Evaluating arithmetic expressions
    ------------------------------------------------*/
    /*
    We can see the usual arithmetic conversion take place via use of the typeid operator 
    (included in the <typeinfo> header), which can be used to show the resulting type of an expression.
    */

    short aa { 4 };
    short bb { 5 };
    std::cout << typeid(aa + bb).name() << ' ' << aa + bb << '\n';// show us the type of a + b

    double dd2 { 4.0 };
    short ss { 2 };
    std::cout << typeid(dd2 + ss).name() << ' ' << dd2 + ss << '\n';// show us the type of d + s


    return 0;
}