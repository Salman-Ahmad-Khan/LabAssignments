#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int gcount; // global variable to store the count
int fun_global()
{
    gcount++;

    return (gcount);
}

int fun_local()
{
    static int lcount = 0; // static local variable to store the count
    lcount++;

    return (lcount);
}

int main()
{

    /*
     Write a function that, when you call it, displays a message telling how many times it has
    been called: “I have been called 3 times”, for instance. Write a main() program that calls
    this function at least 10 times. Try implementing this function in two different ways.
    First, use a global variable to store the count. Second, use a local static variable. Which
    is more appropriate? Why can’t you use a local variable?
    */

    for (int i = 0; i < 100; i++)
    {
        fun_global();//called 100 times here
    }
    int gcount=fun_global();//called again one more time
    //therefore total function calls are 101
    cout << "I have been called " << gcount << " times using global variable count" << endl;





    for (int j = 0; j < 10; j++)
    {
        fun_local();//called 10 times here 
    }
    int lcount = fun_local(); //called again one more time
    //therefore total function calls are 11
    cout << "I have been called " << lcount << " times using local static variable count" << endl;

    return 0;
}

