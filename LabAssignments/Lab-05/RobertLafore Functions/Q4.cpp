#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct distance
{
    int feet;
    float inches;
};

struct distance maxDistance(struct distance, struct distance);
void dispDist(struct distance);

int main()
{
    /*
    Write a function that takes two Distance values as arguments and returns the larger one.
    Include a main() program that accepts two Distance values from the user, compares
    them, and displays the larger.
    */

    struct distance d1, d2, d3; // define three variables of type distance

    // get length d1 from user
    cout << "Input feet ";
    cin >> d1.feet;
    cout << "Input inches ";
    cin >> d1.inches;

    // get length d2 from user
    cout << "Input feet ";
    cin >> d2.feet;
    cout << "Input inches ";
    cin >> d2.inches;

    d3 = maxDistance(d1, d2); // d3 is larger of d1 and d2

    // display all lengths
    cout << endl
         << "distance 1 = ";
    dispDist(d1);
    cout << endl
         << "distance 2 = ";
    dispDist(d2);
    cout << endl
         << "Max of above two distances ";
    dispDist(d3);

    return 0;
}

struct distance maxDistance(struct distance dd1, struct distance dd2)
{

    // if feet are different, return the one with the largest feet
    if (dd1.feet > dd2.feet)
        return (dd1);

    if (dd1.feet < dd2.feet)
        return (dd2);

    // if inches are different,return one with largest inches, or dd2 if equal
    if (dd1.inches > dd2.inches)
        return (dd1);

    if (dd1.inches < dd2.inches)
        return (dd2);

    else
        return (dd2);
}

// display structure of type Distance in feet and inches
void dispDist(struct distance dd)
{

    cout << dd.feet << "\' " << dd.inches << "\"";
}