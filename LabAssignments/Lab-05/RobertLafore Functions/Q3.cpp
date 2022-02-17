#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void zeroSmaller(int &, int &);

int main()
{

    /*
    Write a function called zeroSmaller() that is passed two int arguments by reference
    and then sets the smaller of the two numbers to 0. Write a main() program to exercise
    this function.
    */

    // cout << "Input two numbers ";
    int a=53, b=51;
    // cin >> a >> b;

    zeroSmaller(a, b);
    cout<<"Smaller number will set to 0\n" << "a = " << a << " b = " << b;

    return 0;
}
// sets the smaller of two numbers to 0
void zeroSmaller(int &x, int &y) //formal arguments are reference variables
{
    if (x < y)
        x = 0;
    else
        y = 0;
}