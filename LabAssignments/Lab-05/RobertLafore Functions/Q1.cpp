#include <iostream>
#include <bits/stdc++.h>
#define pi 3.14
using namespace std;


float circarea(float rc)
{
    // const float PI=3.14F;
    // return (PI*rc*rc);
    return (pi*rc*rc);
}

int main()
{
/*
Write a function
called circarea() that finds the area of a circle . It should take an
argument of type float and return an argument of the same type. Write a main() function
that gets a radius value from the user, calls circarea(), and displays the result.*/


cout<<"Input the radius of circle ";
float r;
cin>>r;

float ar = circarea(r);
cout<<"Area of circle with radius "<<r<<" is "<<ar<<endl;



    return 0;
}