
/*

Modify Q1 to compute and display both the range of values in the data
collection and the standard deviation of the data collection. To compute the standard
deviation, accumulate the sum of the squares of the data values ( sum_squares ) in the
main loop.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Reads size of numbers and elements in the list

    cout << endl
         << "How many numbers you want to enter  ";
    int size;
    cin >> size;
    cout << "Okk, Input " << size << " elements now: ";

    int i;
    float arr[100], sum = 0.0, sum_squares = 0.0;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        sum_squares = sum_squares + arr[i] * arr[i];
    }
    float avg = sum / size;

    /*
     float standard_devaition = 0.0;
     for (i = 0; i < size; i++)
     {
         standard_devaition = standard_devaition + pow(arr[i] - avg, 2);
     }
 */
    // Supposes the first element as maximum and minimum
    int max = arr[0], min = arr[0];

    // Finds maximum and minimum in all elements.
    for (i = 0; i < size; i++)
    {
        /* If current element of array is greater than max */
        if (arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element of array is smaller than min */
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int range = max - min;

    // float sd = sqrt((sum_squares / size) - avg * avg);

    // Prints the maximum and minimum element

    cout << endl
         //  << "Maximum element " << max << endl
         //  << "Minimum element " << min << endl
         << "Range  " << range << endl

         //  << " Standar Devaition " << sqrt(standard_devaition / size) << endl;
         << " Standard Devaition: " << sqrt((sum_squares / size) - avg * avg) << endl;

    return 0;
}
