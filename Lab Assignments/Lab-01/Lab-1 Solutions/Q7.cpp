#include <iostream>
using namespace std;

/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX

except that it should be 20 lines high, instead of the 5 lines shown here.
*/
int main()
{
    cout << endl
         << "Input the number of rows: ";

    int rows;
    cin >> rows;

    cout << "Required Pattern: " << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++) // each row has odd number of Xs
        {
            cout << "X";
        }
        cout << endl;
    }
    return 0;
}