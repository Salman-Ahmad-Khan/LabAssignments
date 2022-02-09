#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()

{

    /*
    Q1:
     Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.The
program prompts the user to enter the purchase total and indicate whether the purchaser is a teacher.
Music teachers receive a 10% discount on their sheet music purchases unless the purchase total is
$100 or higher. In that case, the discount is 12%. The discount calculation occurs before the
addition of the 5% sales tax. Here are two sample outputs —one for a teacher and one for a
nonteacher. Use necessary manipulators to format your output.

(For Teacher)
Total purchases         $122.00
Teacher's discount      (12%) 14.64
Discounted total        107.36
Sales tax (5%)          5.37
Total                   $112.73


 (For Non-teacher)
Total purchases         $ 24.90
Sales tax (5%)          1.25
Total                   $ 26.15

    */
    cout << "Enter total purchase: ";
    double purchase;
    cin >> purchase;
    char ch;

    cout << "Is purchaser a teacher? (y/n) ";
    cin >> ch;

    cout << endl
         << "Total purchases\t\t\t" << fixed << setprecision(2) << purchase << endl;

    double teacherDiscount, discountedTotal, salesTax;

    if (ch == 'y' || ch == 'Y')

    {
        teacherDiscount = 0.12 * purchase;
        cout << "Teacher's discount (12%)\t" << teacherDiscount << endl;

        discountedTotal = purchase - teacherDiscount;
        // directly prints the number with .2f precision
        cout << "Discounted total\t\t" << fixed << setprecision(2) << discountedTotal << endl;

        salesTax = 0.05 * discountedTotal;
        cout << "Sales tax (5%)\t\t\t" << salesTax << endl;

        cout << "Total\t\t\t\t" << fixed << setprecision(2) << discountedTotal + salesTax;
    }

    else
    {
        salesTax = 0.05 * purchase;
        cout << "Sales tax (5%)\t\t\t" << salesTax << endl
             << "Total\t\t\t\t" << fixed << setprecision(2) << purchase + salesTax;
    }

    return 0;
}