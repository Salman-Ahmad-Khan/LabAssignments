#include<iostream>
using namespace std;

long  hms_to_sec(int hr,int min, int sec)
{
int seconds =0;//initialised it to 0 to avoid garbage value
seconds = (hr*60*60)+(min*60)+sec;
return (seconds);

}
int main()
{

    /*
    Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.
*/


cout <<" Input the time in this format (Time 12:59:59),separate hours,minutes and seconds by whitespaces ";
int hours,minutes,seconds;
cin>> hours>>minutes>>seconds;

long result =hms_to_sec(hours,minutes,seconds);
cout << "Equivalent time ("<<hours<<":"<<minutes<<":"<<seconds <<") in seconds: " << result<<" sec";

return 0;
}

