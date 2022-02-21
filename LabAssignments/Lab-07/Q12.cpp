#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
    Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
    applied to fractions:
    Addition: a/b + c/d = (a*d + b*c) / (b*d)
    Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
    Multiplication: a/b * c/d = (a*c) / (b*d)
    Division: a/b / c/d = (a*d) / (b*c)
    The user should type the first fraction, an operator, and a second fraction. The program
    should then display the result and ask whether the user wants to continue
    */
    char choice;
    do
    {
        cout << "input the first fraction in the form of a/b:";
        int a, b;
        cin >> a >> b;

        cout << "input the operator('+','-','/','*'): ";
        char op;
        cin >> op;

        cout << "input second fraction in the form of c/d:";
        int c, d;
        cin >> c >> d;

         if (!b || !d)
        {
            cout << "invalid fraction!,fraction denominator can't be zero(0)." << endl;
            op = false;
        }

        int N, D;
        switch (op)
        {
        case '+':
            N = (a * d) + (b * c);
            D = b * d;
            break;
        case '-':
            N = (a * d) - (b * c);
            D = b * d;
            break;
        case '*':
            N = (a * c);
            D = b * d;
            break;
        case '/':
            N = a * d;
            D = b * c;
            break;

        default:
            cout << "Please input a valid operator" << endl;
            break;
        }

        cout << a << "/" << b << op << c << "/" << d << " = " << N << "/" << D << endl;

        cout << "do you wish to continue (y/n)? ";

        cin >> choice;
        cout << endl;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}