#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
} s1, s2; // declare two variables of type sterling

// taking input in pounds-shillings-pence value from the user and return the value as a
//  structure of type sterling
sterling input_sterling()
{
    sterling ss1;

    cin >> ss1.pounds >> ss1.shillings >> ss1.pence;
    return (ss1);
}

// adding two variables of type sterling
sterling add_sterling(sterling s1, sterling s2)
{
    s1.pounds += s2.pounds;
    s1.shillings += s2.shillings;
    s1.pence += s2.pence;

    // 1 pound = 20 shillings = 240pence
    // 1 shilling = 12 pence
    if (s1.pence > 11)
    {
        s1.shillings += static_cast<int>(s1.pence / 12);
        s1.pence %= 12;
    }
    if (s1.shillings > 19)
    {
        s1.pounds += static_cast<int>(s1.shillings / 20);
        s1.shillings %= 20;
    }
    return s1;
}

// displays the result, again in old-style format
void display_sterling(sterling s)
{
    cout << "After adding first money amount and second money amount  "
         << s.pounds << ":" << s.shillings << ":" << s.pence;
}

int main()
{
    /*
     Write a program, based on the sterling structure of Exercise 10 in Chapter 4, that
    obtains from the user two money amounts in old-style British format (£9:19:11), adds
    them, and displays the result, again in old-style format. Use three functions. The first
    should obtain a pounds-shillings-pence value from the user and return the value as a
    structure of type sterling. The second should take two arguments of type sterling and
    return a value of the same type, which is the sum of the arguments. The third should take
    a sterling structure as its argument and display its value.
    */
    cout << "Input first money amount in old-style british format (9:19:11) i.e pounds-shillings-pence : ";
    s1 = input_sterling(); // first function
    cout << "Input second money amount in old-style british format (9:19:11) i.e pounds-shillings-pence : ";
    s2 = input_sterling();
    display_sterling(add_sterling(s1, s2)); // second and third function

    return 0;
}
