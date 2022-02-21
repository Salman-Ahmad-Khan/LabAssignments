#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TIME
{
    int hours,
        minutes,
        seconds;

} time1; // declare a variable of type TIME

int main()
{

    /*
    Create a structure called time. Its three members, all type int, should be called hours,
    minutes, and seconds. Write a program that prompts the user to enter a time value in
    hours, minutes, and seconds. This can be in 12:59:59 format, or each number can be
    entered at a separate prompt (“Enter hours:”, and so forth). The program should then
    store the time in a variable of type struct time, and finally print out the total number of
    seconds represented by this time value:
    long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds
    */

    cout << "Input time in this format 12:59:59 separated by whitespaces ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    long total_seconds = time1.hours * 60 * 60 + time1.minutes * 60 + time1.seconds;

    cout << "total number of seconds represented by this time value: " << total_seconds<<" seconds" << endl;

    return 0;
}
