#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//swaps the values of the variables in the calling program
void swap(int& x, int& y)
{
    // int temp;
    // temp = x;
    // x = y;
    // y = temp;



//another way to swap two values
// let x=12 and y=74
    x = x+y;  //x=12+74=86
    y = x-y;  //y=86-74=12
    x = x-y;  //x=86-12=74

    return;
}

int main()
{
    /*
    Write a function called swap() that interchanges two int values passed to it by the calling program. (Note that this function swaps the values of the variables in the calling program, not those in the function.) You’ll need to decide how to pass the arguments. Create
    a main() program to exercise the function.*/

    cout << "Input two numbers of type int ";
    int num1, num2;
    cin >> num1 >> num2;

    cout << "Before swapping two numbers are " << num1 << " and " << num2 << endl;

    swap(num1, num2); // calling a function

    cout << "After swapping two numbers are " << num1 << " and " << num2 << endl;

    return 0;
}