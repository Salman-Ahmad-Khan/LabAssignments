#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

struct TIME
{
    int hours,
        minutes,
        seconds;

} time1, time2;



//swaps the two time values 
void swap(TIME& t1, TIME& t2)
{

    TIME temp;

    temp.hours = t1.hours;
    temp.minutes = t1.minutes;
    temp.seconds = t1.seconds;

    t1.hours = t2.hours;
    t1.minutes = t2.minutes;
    t1.seconds = t2.seconds;

    t2.hours = temp.hours;
    t2.minutes = temp.minutes;
    t2.seconds = temp.seconds;

    return;
}

int main()
{

    /*
    Repeat Exercise 8, but instead of two int variables, have the swap() function interchange two struct time values (see Exercise 6)
    */

    cout<<endl << " Input the time-1 in this format (Time 12:59:59),separate hours,minutes and seconds by whitespaces ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    cout<<endl  << " Input the time-2 in this format (Time 12:59:59),separate hours,minutes and seconds by whitespaces ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;

    cout<<endl  << "Before swapping time-1 is (" << time1.hours << ":" << time1.minutes << ":" << time1.seconds << ")"
         << " and time-2 is (" << time2.hours << ":" << time2.minutes << ":" << time2.seconds << ")" << endl;

    swap(time1, time2);

    cout<<endl  << "After swapping time-1 is (" << time1.hours << ":" << time1.minutes << ":" << time1.seconds << ")"
         << " and time-2 is (" << time2.hours << ":" << time2.minutes << ":" << time2.seconds << ")" << endl;

    return 0;
}