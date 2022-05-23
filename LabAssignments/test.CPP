#include <iostream>
using namespace std;

void swap(int &, int &);

int main()
{
    int a = 45, b = 50;
    // int s=swap(a,b);
    cout << "before swapping " << a << " " << b << endl;
    swap(a, b);
}

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "after swapping " << x << " " << y;
}