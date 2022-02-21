#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TIME
{
  int hours,
      minutes,
      seconds;

} time1, time2, time3; // declare two variables of type TIME

int main()
{

  /*
  Use the time structure from Exercise 9, and write a program that obtains two time values from the user in 12:59:59 format, stores them in struct time variables, converts
  each one to seconds (type int), adds these quantities, converts the result back to hoursminutes-seconds, stores the result in a time structure, and finally displays the result in
  12:59:59 format
  */

  cout << "Input time-1 in this format 12:59:59 separated by whitespaces ";
  cin >> time1.hours >> time1.minutes >> time1.seconds;

  cout << "Input time-2 in this format 12:59:59 separated by whitespaces ";
  cin >> time2.hours >> time2.minutes >> time2.seconds;

  int total_second_1 = time1.hours * 60 * 60 + time1.minutes * 60 + time1.seconds;
  cout << "total seconds of time-1 " << total_second_1 << endl;
  int total_second_2 = time2.hours * 60 * 60 + time2.minutes * 60 + time2.seconds;
  cout << "total seconds of time-2 " << total_second_2 << endl;
  int net_seconds = total_second_1 + total_second_2;
  cout << "net seconds of time-1 and time-2 " << net_seconds << endl;

  /*
  t_sec=8247;
hh=t_sec/3600;
t_sec=t_sec%3600;
mm=t_sec/60;
t_sec=t_sec%60;
*/
  time3.hours = (net_seconds / 3600);
  net_seconds = (net_seconds % 3600);
  time3.minutes = (net_seconds / 60);
  time3.seconds = (net_seconds % 60);

  if (time3.minutes > 59)
  {
    time3.minutes = time3.minutes - 59;
    time3.hours++;
  }
  if (time3.seconds > 59)
  {
    time3.seconds = time3.seconds - 59;
    time3.minutes++;
  }

  cout << "net seconds in this format (hh:mm:ss): " << time3.hours << ":" << time3.minutes << ":" << time3.seconds << endl;

  return 0;
}