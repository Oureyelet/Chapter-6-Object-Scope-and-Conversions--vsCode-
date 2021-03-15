#include "first.cpp"

#ifndef FIRST_H
#define FIRST_H

void sayHi();
extern const int g_y1;//this extern is a forward declaration of a const variable named g_y that is defined somewhere else
extern int g_x1;//this extern is a forward declaration of a variable named g_x that is defined somewhere else

#endif // end FIRST_H