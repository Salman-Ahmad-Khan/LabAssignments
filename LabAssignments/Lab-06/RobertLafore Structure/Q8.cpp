#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct fraction
{
    int Nr;
    int Dr;
} fraction1, fraction2, frac_ans; // declare three variables of type fraction

int main()
{
    /*
    Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
    Basics.” This program stores the numerator and denominator of two fractions before
    adding them, and may also store the answer, which is also a fraction. Modify the program so that all fractions are stored in variables of type struct fraction, whose two
    members are the fraction’s numerator and denominator (both type int). All fraction related data should be stored in structures of this type.
    */

    cout << "input the first fraction in the form of a/b: ";
    cin >> fraction1.Nr >> fraction1.Dr;
    cout << "input the second fraction in the form of c/d: ";
    cin >> fraction2.Nr >> fraction2.Dr;

    //  Nr = (a * d) + (b * c);
    //         Dr = b * d;
    frac_ans.Nr = fraction1.Nr * fraction2.Dr + fraction2.Nr * fraction1.Dr;
    frac_ans.Dr = fraction1.Dr * fraction2.Dr;

    cout << "The sum of (" << fraction1.Nr << "/" << fraction1.Dr << ") " << '+' << " (" << fraction2.Nr << "/" << fraction2.Dr << ") "
         << " = " << frac_ans.Nr << "/" << frac_ans.Dr << endl;
    return 0;
}