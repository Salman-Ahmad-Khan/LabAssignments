#include <iostream>
using namespace std;

/*
Q4:
Modify Q3  to display the average temperature (a real number) at the end of
the run.
*/

int main()
{
    cout << endl
         << "How many temperatures you want to enter: ";
    int n;
    cin >> n;
    cout << endl
         << "Input all the " << n << " Temperatures at once followed by whitespaces: ";

    int i, temp;
    float sum = 0.0, avg;
    for (i = 1; i <= n; i++)
    {

        cin >> temp;
        sum = sum + temp; // calculating the sum of all temperatures
    }
    avg = sum / n;
    cout << endl
         << "The average temperature is " << avg << endl;
    return 0;
}