#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

struct fraction
{
    int Nr;
    int Dr;
} fraction1, fraction2, fraction3; // declare three variables of type fraction

fraction fadd(fraction f1, fraction f2)
{

    //  Nr = (a * d) + (b * c);
    //         Dr = b * d;
    fraction3.Nr = f1.Nr * f2.Dr + f1.Dr * f2.Nr;
    fraction3.Dr = f1.Dr * f2.Dr;

    return (fraction3);
}

fraction fsub(fraction f1, fraction f2)
{

    //  Nr = (a * d) - (b * c);
    //         Dr = b * d;
    fraction3.Nr = f1.Nr * f2.Dr - f1.Dr * f2.Nr;
    fraction3.Dr = f1.Dr * f2.Dr;

    return (fraction3);
}

fraction fdiv(fraction f1, fraction f2)
{

    //  N = a * d;
    //  D = b * c;
    fraction3.Nr = f1.Nr * f2.Dr;
    fraction3.Dr = f1.Dr * f2.Nr;

    return (fraction3);
}

fraction fmul(fraction f1, fraction f2)
{

    // N = (a * c);
    //  D = b * d;
    fraction3.Nr = f1.Nr * f2.Nr;
    fraction3.Dr = f1.Dr * f2.Dr;

    return (fraction3);
}

int main()
{

    /*
     Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
    functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
    fmul(), and fdiv(). Each of these functions should take two arguments of type struct
    fraction, and return an argument of the same type.
    */
    cout << "input the first fraction in the form of a/b:";
    cin >> fraction1.Nr >> fraction1.Dr;

    cout << "input the operator('+','-','/','*'): ";
    char op;
    cin >> op;

    cout << "input the second fraction in the form of a/b:";
    cin >> fraction2.Nr >> fraction2.Dr;

    switch (op)
    {
    case '+':
        fraction3 = fadd(fraction1, fraction2);
        // cout << fraction1.Nr << "/" << fraction1.Dr << op << fraction2.Nr << "/" << fraction2.Dr << " = " << fraction3.Nr << "/" << fraction3.Dr << endl;
        break;

    case '-':
        fraction3 = fsub(fraction1, fraction2);
        //  cout << fraction1.Nr << "/" << fraction1.Dr << op << fraction2.Nr << "/" << fraction2.Dr << " = " << fraction3.Nr << "/" << fraction3.Dr << endl;
        break;

    case '/':
        fraction3 = fdiv(fraction1, fraction2);
        // cout << fraction1.Nr << "/" << fraction1.Dr << op << fraction2.Nr << "/" << fraction2.Dr << " = " << fraction3.Nr << "/" << fraction3.Dr << endl;
        break;

    case '*':
        fraction3 = fmul(fraction1, fraction2);
        // cout << fraction1.Nr << "/" << fraction1.Dr << op << fraction2.Nr << "/" << fraction2.Dr << " = " << fraction3.Nr << "/" << fraction3.Dr << endl;
        break;

    default:
        cout << "Please input a valid operator" << endl;
        break;
    }

    cout << "(" << fraction1.Nr << "/" << fraction1.Dr << ") " << op << " (" << fraction2.Nr << "/" << fraction2.Dr << ") "
         << " = " << fraction3.Nr << "/" << fraction3.Dr << endl; //<< " = " << fraction3.Nr / fraction3.Dr to get the exact result

    return 0;
}