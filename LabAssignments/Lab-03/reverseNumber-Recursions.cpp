#include <iostream>
using namespace std;
void reverse(long int number)
{
    // base condition
    if (number < 10)
    {
        cout << number;
    }
    else
    {
        cout << number % 10; // prints the last digit

        reverse(number / 10); //  recurse for remaining number, after removing the last digit from original number
    }

    return;
}
int main()
{

//program to reverse a number using recursions
    cout << endl
         << "Input a number: ";
     long int num;
    cin >> num;

    cout << "Reverse of the '" << num << "' is ";
    reverse(num); // calling a function
}