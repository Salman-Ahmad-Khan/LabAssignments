
/*
Q1:
Write a program that will find the smallest, largest, and average values in a collection of
N numbers. Get the value of N before scanning each value in the collection of N numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int i, max, min, size, sum = 0, sum_squares = 0;

    // Reads size array and elements in the array

    cout << endl
         << "How many numbers you want to enter  ";
    cin >> size;
    cout << "Okk, Input " << size << " elements now: ";

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        // sum_squares = sum_squares + arr[i] * arr[i];
    }

    /* Supposes the first element as maximum and minimum */
    max = arr[0];
    min = arr[0];

    /*
      Finds maximum and minimum in all elements.
     */
    for (i = 1; i < size; i++)
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
    float avg = sum / size;

    // Prints the maximum , minimum element and average

    cout << endl
         << "Maximum element " << max << endl
         << "Minimum element " << min << endl

         << "Average " << avg << endl;

    /*
    Another way to calculate the max,min and range of a list of numbers:
    */

    //     cout << "How many numbers you want to enter ";
    //     int n;
    //     cin >> n;

    //     cout << "Okk, input the " << n << " numbers ";
    //     int numb;
    //     cin >> numb;

    //     int max, min, sum = 0;
    //     max = min = numb;
    //     n = n - 1;

    //     float avg;

    //     while (n)
    //     {

    //         cin >> numb;
    //         sum=sum+numb;
    //         if (numb > max)
    //         {
    //             max = numb;
    //         }
    //         if (numb < min)
    //         {
    //             min = numb;
    //         }
    //         sum = sum + numb;
    //         n--;
    //     }

    //     int range = max - min;

    //     cout << "Maximun number is " << max << endl;
    //     cout << "MInimum number is " << min << endl;
    //     cout << "Range is " << range << endl;

    return 0;
}
