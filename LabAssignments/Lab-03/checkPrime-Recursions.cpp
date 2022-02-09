
#include <bits/stdc++.h>
using namespace std;

int checkPrime(int num1, int index)
{
    // Base cases
    if (num1 < 2)
    {
        return false;
    }
    if (num1 == 2 || num1 == 3)
    {
        return true;
    }
    if (num1 % index == 0)
    {
        return false;
    }
    if (index <= num1 / 2) /*if(index<=num1/2) then we reached point upto which no index fully divided num1 so return 1 as it is possible for prime numbers only. Otherwise recurse for next index using result=checkPrime(num1, index+1)*/
    {
        return true;
    }

    int result = checkPrime(num1, index + 1); // Check for next divisor
                                              // or recurse for next index

    return (result);
}

int main()
{
    // Program to find whether a Number is Prime or Not using Recursion
    cout << "Input any number ";
    int Num;
    cin >> Num;

    if (checkPrime(Num, 2))
    {
        cout << "'" << Num << "' is a Prime number!";
    }
    else
    {
        cout << "'" << Num << "' is non Prime!";
    }

    return 0;
}
