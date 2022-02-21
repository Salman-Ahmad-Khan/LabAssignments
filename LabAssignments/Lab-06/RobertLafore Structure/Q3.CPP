#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct distance
{
    int feet;
    float inches;
};

struct volume
{
    // declare three member variables of type distance for struct volume
    struct distance length;
    struct distance width;
    struct distance height;

} // declare and initialise a variable of type volume
vol_room = {{16, 3.5}, {12, 6.25}, {8, 1.75}};

int main()
{

    /*
     Create a structure called Volume that uses three variables of type Distance (from the
    ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
    to specific dimensions, then calculate the volume it represents, and print out the result.
    To calculate the volume, convert each dimension from a Distance variable to a variable
    of type float representing feet and fractions of a foot, and then multiply the resulting
    three numbers.
    */

//    To calculate the volume, convert each dimension from a Distance variable to a variable
//     of type float representing feet and fractions of a foot, and then multiply the resulting
//     three numbers.
float l,w,h;
l=vol_room.length.feet +(vol_room.length.inches)/12.0;//dividing by 12 we get fraction of foot
w=vol_room.width.feet +(vol_room.width.inches)/12.0;
h=vol_room.height.feet +(vol_room.height.inches)/12.0;

cout<<"volume of room is "<<l*w*h<<" cubic feet"<<endl;

    return 0;
}