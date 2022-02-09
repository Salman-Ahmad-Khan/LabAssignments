#include <iostream>
using namespace std;

void Quadrant(float x, float y)
{

    // Conditions to find out the quadrant or axis of a point

    if (x == 0 && y == 0)
    {
        cout << "The point lies at Origin";
    }
    else if (x == 0 && y != 0)
    {
        cout << "The point is on y-axis";
    }

    else if (x != 0 && y == 0)
    {
        cout << "The point is on x-axis";
    }

    else if (x > 0 && y > 0)
    {
        cout << "The point lies in First Quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point lies in Second Quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point lies in Third Quadrant";
    }

    else if (x > 0 && y < 0)
    {
        cout << "The point lies in Fourth Quadrant";
    }
    return;
}

int main()

{
    /*
    Q4:
    Write a program that takes the x – y coordinates of a point in the Cartesian plane and prints a
    message telling either an axis on which the point lies or the quadrant in which it is found.
    Sample lines of output:
    (-1.0, -2.5) is in quadrant III
    (0.0, 4.8) is on the y-axis
    */

    cout << "Input the coordinates of a point,P(x,y): ";
    float x, y;
    cin >> x >> y;

    Quadrant(x, y); // calling a Quadrant function

    return 0;
}