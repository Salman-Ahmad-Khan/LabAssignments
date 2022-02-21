#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct DATE
{
    int day_of_month;
    int month;
    int year;
}
date; //declare variable of type DATE

int main()
{

/*
Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.
*/
cout<<"Hey,input the date in this format(dd/mm/yyyy) ";
cin>>date.day_of_month>>date.month>>date.year;

cout<<"date entered by you: "<<date.day_of_month<<"/"<<date.month<<"/"<<date.year<<endl;



    return 0;
}