#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct phone
{
    int area_code;
    int exchange;
    int number;
}phone1={212,767,8900},//declare and initialise a variable of type phone
phone2;//declare another variable of type phone

int main()
{

/*
 A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers. The interchange might
look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212
*/

cout<<"Input your area code, exchange, and number,for instance (111) 222-3333: ";
cin>>phone2.area_code>>phone2.exchange>>phone2.number;


//display two numbers
cout<<"My number is ("<<phone1.area_code<<") "<<phone1.exchange<<"-"<<phone1.number<<endl;
cout<<"Your number is ("<<phone2.area_code<<") "<<phone2.exchange<<"-"<<phone2.number<<endl;
    return 0;
}