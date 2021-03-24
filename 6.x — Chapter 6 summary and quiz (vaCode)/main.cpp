
/*---------------------------------------
                Quiz time
----------------------------------------/*
/*
Question #1

Fix the following program:
*/
/*
My answer:

#include <iostream>
 
int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;
 
 
	if (num > 0)
    {
	    std::cout << "You entered: " << num << '\n';
    }
    else if (num == 0)
    {
        std::cout << "ZERO is not positive numbe. Making positive." << '\n';
    }
    else
    {
		std::cout << "Negative number entered.  Making positive.\n";
    }
 
	return 0;
}
*/

/*
Question #2

Write a file named constants.h that makes the following program run. 
If your compiler is C++17 capable, use inline constexpr variables. Otherwise, use 
normal constexpr variables. You can pick any value you like for max_class_size.

main.cpp:
*/
/*
my answer:

#include "constants.h"
 
#include <iostream>
 
int main()
{
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;
 
 
	if (students > constants::max_class_size)
		std::cout << "There are too many students in this class" << '\n';
	else
		std::cout << "This class isn't too large" << '\n';
 
	return 0;
}
*/

/*
Question #3

Complete the following program by writing the passOrFail() function, 
which should return true for the first 3 calls, and false thereafter.
*/

#include <iostream>

bool passOrFail()
{
   static int c {3};
   return (--c >= 0);
}
 
int main()
{
	std::cout << "User #1: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #2: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #3: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #4: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #5: " << (passOrFail() ? "Pass" : "Fail") << '\n';
 
	return 0;
}