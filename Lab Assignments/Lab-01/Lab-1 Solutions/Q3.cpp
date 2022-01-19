/*

Q3:
Write a program to process a collection of daily high temperatures. Your program should
count and print the number of hot days (high temperature 85 or higher), the number of
pleasant days (high temperature 60–84),and the number of cold days (high temperatures
less than 60). It shouldalso display the category of each temperature. Test your program
on the following data:
55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
92 90 93 87 80 78 79 72 68 61 59

*/

#include <iostream>
using namespace std;
#define SIZE 26 // size of above data collection is 26
int main()
{

    cout << endl
         << "Input all the Temperatures at once followed by whitespaces:" << endl;

    int hot = 0, pleasant = 0, cold = 0, i, temp;

    for (i = 1; i <= SIZE; i++)
    {

        cin >> temp;

        if (temp >= 85)
        {
            // cout << "It is a hot day " << endl;

            ++hot; // counting hot days
        }

        else if (temp >= 60 && temp <= 84)
        {
            // cout << "It is a pleasant day" << endl;

            ++pleasant; // counting pleasant days
        }
        else
        {
            // cout << "It is a cold day" << endl;

            ++cold; // counting cold days
        }
    }

    cout << endl
         << endl
         << "The number of hot days is " << hot << endl
         << "The number of pleasant  days is " << pleasant << endl
         << "The number of cold days is " << cold << endl;

    return 0;
}