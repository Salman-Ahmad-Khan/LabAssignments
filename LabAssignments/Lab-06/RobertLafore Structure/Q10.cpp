#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
} ster_amount; // declare a variable of type sterling

int main()
{
    /*
    Create a structure called sterling that stores money amounts in the old-style British
    system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.” The members could be called pounds, shillings, and pence, all of type int. The program should
    ask the user to enter a money amount in new-style decimal pounds (type double), convert it to the old-style system, store it in a variable of type struct sterling, and then
    display this amount in pounds-shillings-pence format.
    */

    cout << "Input a money amount in new-style decimal pounds ";
    double new_style_pounds;
    cin >> new_style_pounds;

    // 1 pound = 20 shillings = 240pence
    // 1 shilling = 12 pence

    ster_amount.pounds = int(new_style_pounds);
    float fraction_pounds = new_style_pounds - ster_amount.pounds;

    float fraction_shilling = fraction_pounds * 20;
    ster_amount.shillings = int(fraction_shilling);

    float frac_shilling = fraction_shilling - ster_amount.shillings;

    ster_amount.pence = int(frac_shilling * 12);

    cout << "Equivalent(money amount in new-style decimal pounds) in old old-style british notation " << ster_amount.pounds << "." << ster_amount.shillings << "." << ster_amount.pence << endl;

    return 0;
}