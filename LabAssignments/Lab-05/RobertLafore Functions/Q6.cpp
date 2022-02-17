#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TIME
{
    int hours, minutes, seconds;
} time1, time2;

long time_to_secs(TIME time3)
{
    return (time3.hours * 60 * 60 + time3.minutes * 60 + time3.seconds);
}

TIME secs_to_time(long seconds_t)
{

    int h, m, s;
    TIME time2;

    h = seconds_t / 3600;

    seconds_t = seconds_t % 3600;
    m = seconds_t / 60;
    s = seconds_t % 60;

    time2.hours = h;
    time2.minutes = m;
    time2.seconds = s;

    return (time2);
}

int main()
{

    /*
    Start with the program from Exercise 11 in Chapter 4, “Structures,” which adds two
    struct time values. Keep the same functionality, but modify the program so that it uses
    two functions. The first, time_to_secs(), takes as its only argument a structure of type time, and returns the equivalent in seconds (type long). The second function,
    secs_to_time(), takes as its only argument a time in seconds (type long), and returns a
    structure of type time
    */

    cout << " Input the time in this format (Time 12:59:59),separate hours,minutes and seconds by whitespaces ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    cout << "Equivalent time (" << time1.hours << ":" << time1.minutes << ":" << time1.seconds << ") in seconds: " << time_to_secs(time1) << " seconds";

    cout <<endl<< "Input time in seconds ";
    long t_seconds;
    cin >> t_seconds;

    time2 = secs_to_time(t_seconds);
    cout << "Equivalent time (" << t_seconds<<" seconds) in (hh:mm:ss): "<< time2.hours << ":" << time2.minutes << ":" << time2.seconds<< endl;

    return 0;
}