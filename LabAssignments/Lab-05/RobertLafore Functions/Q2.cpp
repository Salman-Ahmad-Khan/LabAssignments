#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double power(double numb, int p = 2); // p has default value 2

int main()
{

    /*
    Raising a number n to a power p is the same as multiplying n by itself p times. Write a
    function called power() that takes a double value for n and an int value for p, and
    returns the result as a double value. Use a default argument of 2 for p, so that if this
    argument is omitted, the number n will be squared. Write a main() function that gets values
    from the user to test this function.
    */
    double ans;

    cout << "Input any number ";
    double num;
    cin >> num;

    cout << "want to enter a power (y/n)? ";
    char yn;
    cin >> yn;

    if (yn == 'y' || yn == 'Y')
    {
        cout << "Please,input the power number ";
        int pw;
        cin >> pw;
        ans = power(num, pw); // raise number to power
    }

    else
    {
        ans = power(num);
        // square the number
    }

    cout << "answer is " << ans << endl;

    return 0;
}

double power(double numb, int p)
{
    double res = 1.0;
    for (int i = 1; i <= p; i++)
    {

        res *= numb;
        // res=res*numb;
    }

    return (res);
}