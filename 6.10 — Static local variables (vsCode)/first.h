#ifndef FIRST_H
#define FIRST_H

/*-------
ID Number
-------*/

/*
Generating a unique ID number is very easy to do with 
a static duration local variable:
*/

int generateID()
{
    static int s_itemID { 0 };
    return s_itemID++;
    /*
    makes copy of s_itemID, increments the real s_itemID, 
    then returns the value in the copy
    */
}


#endif // end FIRST_H