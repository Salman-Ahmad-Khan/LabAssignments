#include <iostream>
#include <bits/stdc++.h>
using namespace std;


double power(double, int p = 2);// p has default value 2
char power(char, int p = 2);// p has default value 2
int power(int, int p = 2);// p has default value 2
long power(long, int p = 2);// p has default value 2
float power(float, int p = 2);// p has default value 2

int main()
{
    /*
     Start with the power() function of Exercise 2, which works only with type double.
    Create a series of overloaded functions with the same name that, in addition to double,
    also work with types char, int, long, and float. Write a main() program that exercises
    these overloaded functions with all argument types.
    */
    char yn;

    //  double number
    cout << endl
         << "Please,input the number of type double ";
    double dn;
    cin >> dn;
    cout << "want to enter a power (y/n)? ";

    cin >> yn;

    if (yn == 'y' || yn == 'Y')
    {
        cout << "Please,input the power number of type int ";
        int pow;
        cin >> pow;
        // raise number to power
        cout << dn << " raised to power " << pow << " is equal to " << power(dn, pow) << endl;
    }

    else
    {
        // square the number
        cout << dn << " raised to power " << 2 << " is equal to " << power(dn) << endl;
    }

    //  int number
    cout << endl
         << "Please,input the number of type int ";
    int in;
    cin >> in;
    cout << "want to enter a power (y/n)? ";

    cin >> yn;

    if (yn == 'y' || yn == 'Y')
    {
        cout << "Please,input the power number of type int ";
        int pow;
        cin >> pow;
        // raise number to power
        cout << in << " raised to power " << pow << " is equal to " << power(in, pow) << endl;
    }

    else
    {
        // square the number
        cout << in << " raised to power " << 2 << " is equal to " << power(in) << endl;
    }

    //  float number
    cout << endl
         << "Please,input the number of type float ";
    float fn;
    cin >> fn;
    cout << "want to enter a power (y/n)? ";

    cin >> yn;

    if (yn == 'y' || yn == 'Y')
    {
        cout << "Please,input the power number of type int ";
        int pow;
        cin >> pow;
        // raise number to power
        cout << fn << " raised to power " << pow << " is equal to " << power(fn, pow) << endl;
    }

    else
    {
        // square the number
        cout << fn << " raised to power " << 2 << " is equal to " << power(fn) << endl;
    }

    //  long number
    cout << endl
         << "Please,input the number of type long ";
    long ln;
    cin >> ln;
    cout << "want to enter a power (y/n)? ";

    cin >> yn;

    if (yn == 'y' || yn == 'Y')
    {
        cout << "Please,input the power number of type int ";
        int pow;
        cin >> pow;
        // raise number to power
        cout << ln << " raised to power " << pow << " is equal to " << power(ln, pow) << endl;
    }

    else
    {
        // square the number
        cout << ln << " raised to power " << 2 << " is equal to " << power(ln) << endl;
    }

    //  char number
    cout << endl
         << "Please,input the number of type char ";
    long cn;
    cin >> cn;
    cout << "want to enter a power (y/n)? ";

    cin >> yn;

    if (yn == 'y' || yn == 'Y')
    {
        cout << "Please,input the power number of type int ";
        int pow;
        cin >> pow;
        // raise number to power
        cout << cn << " raised to power " << pow << " is equal to " << power(cn, pow) << endl;
    }

    else
    {
        // square the number
        cout << cn << " raised to power " << 2 << " is equal to " << power(cn) << endl;
    }
    return 0;
}

// power of double number
double power(double d_num, int p)
{

    double ans = 1.0;
    for (int i = 1; i <= p; i++)
    {
        ans *= d_num;
    }
    return (ans);
}

// power of int number
int power(int i_num, int p)
{

    int ans = 1;
    for (int i = 1; i <= p; i++)
    {
        ans *= i_num;
    }
    return (ans);
}

// power of float number
float power(float f_num, int p)
{
    float ans = 1.0F;
    for (int i = 1; i <= p; i++)
    {
        ans *= f_num;
    }

    return (ans);
}

// power of long number
long power(long l_num, int p)
{
    long ans = 1.0;
    for (int i = 1; i <= p; i++)
    {
        ans *= l_num;
    }
    return (ans);
}

// power of char number
char power(char c_num, int p)
{
    char ans = 1;
    for (int i = 1; i <= p; i++)
    {
        ans *= c_num;
    }

    return (c_num);
}