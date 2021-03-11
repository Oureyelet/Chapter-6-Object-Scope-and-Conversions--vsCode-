#include <iostream>

int max(int x, int y) // x and y enter scope here
{
    // assign the greater of x or y to max
    int max { (x > y) ? x : y }; // max enters scope here

    return max;
}// x, y, and max leave scope here