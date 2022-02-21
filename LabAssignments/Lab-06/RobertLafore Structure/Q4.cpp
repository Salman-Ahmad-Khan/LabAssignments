#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct employee
{
    int emp_ID;
    float emp_compensation;
} emp1, emp2, emp3; // declare three variables of type employee

int main()
{

    /*
     Create a structure called employee that contains two members: an employee number
    (type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
    in this data for three employees, store it in three variables of type struct employee, and
    then display the information for each employee.

    */


    cout << "Input employee ID for employee number(1) ";
    cin >> emp1.emp_ID;
    cout << "Input employee's compensation(in dollars) for employee number(1) ";
    cin >> emp1.emp_compensation;

    cout << "Input employee ID for employee number(2) ";
    cin >> emp2.emp_ID;
    cout << "Input employee's compensation(in dollars) for employee number(2) ";
    cin >> emp2.emp_compensation;

    cout << "Input employee ID for employee number(3) ";
    cin >> emp3.emp_ID;
    cout << "Input employee's compensation(in dollars) for employee number(3) ";
    cin >> emp3.emp_compensation;

    cout << setw(15) << "Employee ID" << setw(30) << "Employee's Compensation" << endl;
    cout << setw(10) << emp1.emp_ID << setw(20) << emp1.emp_compensation << endl;
    cout << setw(10) << emp2.emp_ID << setw(20) << emp2.emp_compensation << endl;
    cout << setw(10) << emp3.emp_ID << setw(20) << emp3.emp_compensation << endl;

    return 0;
}