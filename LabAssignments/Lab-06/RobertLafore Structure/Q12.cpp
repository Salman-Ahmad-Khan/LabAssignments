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
    Revise the four-function fraction calculator program of Exercise 12 in Chapter 3 so that
    each fraction is stored internally as a variable of type struct fraction, as discussed in
    Exercise 8 in this chapter.
    */
    char choice;
    do
    {
        cout << "input the first fraction in the form of a/b:";

        cin >> fraction1.Nr >> fraction1.Dr;

        cout << "input the operator('+','-','/','*'): ";
        char op;
        cin >> op;

        cout << "input second fraction in the form of c/d:";

        cin >> fraction2.Nr >> fraction2.Dr;
        if (!fraction1.Dr || !fraction2.Dr)
        {
            cout << "invalid fraction!,fraction denominator can't be zero(0)." << endl;
            op = false;
        }
        switch (op)
        {
        case '+':
            frac_ans.Nr = fraction1.Nr * fraction2.Dr + fraction2.Nr * fraction1.Dr;
            frac_ans.Dr = fraction1.Dr * fraction2.Dr;
            break;
        case '-':
            frac_ans.Nr = fraction1.Nr * fraction2.Dr - fraction2.Nr * fraction1.Dr;
            frac_ans.Dr = fraction1.Dr * fraction2.Dr;
            break;
        case '*':
            frac_ans.Nr = fraction1.Nr * fraction2.Nr;
            frac_ans.Dr = fraction1.Dr * fraction2.Dr;
            break;
        case '/':
            frac_ans.Nr = fraction1.Nr * fraction2.Dr;
            frac_ans.Dr = fraction1.Dr * fraction2.Nr;

            break;

        default:
            cout << "Please input a valid operator" << endl;
            break;
        }
        cout << "The sum of (" << fraction1.Nr << "/" << fraction1.Dr << ") " << op << " (" << fraction2.Nr << "/" << fraction2.Dr << ") "
             << " = " << frac_ans.Nr << "/" << frac_ans.Dr << endl;

        cout << "do you wish to continue (y/n)? ";

        cin >> choice;
        cout << endl;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}