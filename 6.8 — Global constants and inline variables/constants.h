#ifndef CONSTANTS_H
#define CONSTANTS_H

// define your own namespace to hold constants
namespace constants
{
    // inline global variables have external linkage by default.
    inline constexpr double pi { 3.14159 };
    inline constexpr double avogadro { 6.0221413e23 };
    inline constexpr double my_gravity { 9.2 };
}

#endif // end CONSTANTS_H

/*
Then use the scope resolution operator (::) with the namespace name to the left, 
and your variable name to the right in order to access your constants in .cpp files:
*/