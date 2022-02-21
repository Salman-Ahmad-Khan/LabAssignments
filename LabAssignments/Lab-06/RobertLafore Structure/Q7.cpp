#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct DATE
{
    int day_of_month;
    int month;
    int year;
};

enum emp_type
{
    // Available Employee Type List
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

struct employee
{
    int emp_ID;
    float emp_compensation;
    emp_type etype; // declare a variable of type emp_type
    DATE edate;     // declare a variable of type DATE

} emp1, emp2, emp3; // declare three variables of type employee

int main()
{
    /*
    Add a variable of type enum etype (see Exercise 6), and another variable of type struct
    date (see Exercise 5) to the employee class of Exercise 4. Organize the resulting program so that the user enters four items of information for each of three employees: an
    employee number, the employee’s compensation, the employee type, and the date of first
    employment. The program should store this information in three variables of type
    employee, and then display their contents.
    */

    char first_letter; // to store first letter of employee type
                       // input first employee details
    cout << "Input employee ID for employee number(1) ";
    cin >> emp1.emp_ID;
    cout << "Input employee's compensation(in dollars) for employee number(1) ";
    cin >> emp1.emp_compensation;
    cout << "Hey,input the date of first employment in this format(dd / mm / yyyy) ";
    cin >> emp1.edate.day_of_month >> emp1.edate.month >> emp1.edate.year;

    cout << "Available Employee Type List \n1.laborer\n2.secretary\n3.manager\n4.accountant\n5.executive\n6.researcher)\nInput employee type (first letter only): ";
    cin >> first_letter;

    switch (first_letter)
    {
    case 'l':
        emp1.etype = laborer;
        break;
    case 's':
        emp1.etype = secretary;
        break;
    case 'm':
        emp1.etype = manager;
        break;
    case 'a':
        emp1.etype = accountant;
        break;
    case 'e':
        emp1.etype = executive;
        break;
    case 'r':
        emp1.etype = researcher;
        break;

    default:
        cout << "\nInput a valid letter" << endl;
        break;
    }

    // input second employee details
    cout << endl
         << "Input employee ID for employee number(2) ";
    cin >> emp2.emp_ID;
    cout << "Input employee's compensation(in dollars) for employee number(1) ";
    cin >> emp2.emp_compensation;
    cout << "Hey,input the date of first employment in this format(dd / mm / yyyy) ";
    cin >> emp2.edate.day_of_month >> emp2.edate.month >> emp2.edate.year;

    cout << "Available Employee Type List \n1.laborer\n2.secretary\n3.manager\n4.accountant\n5.executive\n6.researcher)\nInput employee type (first letter only): ";
    cin >> first_letter;

    switch (first_letter)
    {
    case 'l':
        emp2.etype = laborer;
        break;
    case 's':
        emp2.etype = secretary;
        break;
    case 'm':
        emp2.etype = manager;
        break;
    case 'a':
        emp2.etype = accountant;
        break;
    case 'e':
        emp2.etype = executive;
        break;
    case 'r':
        emp2.etype = researcher;
        break;

    default:
        cout << "Input a valid letter" << endl;
        break;
    }

    // input third employee details
    cout << endl
         << "Input employee ID for employee number(3) ";
    cin >> emp3.emp_ID;
    cout << "Input employee's compensation(in dollars) for employee number(1) ";
    cin >> emp3.emp_compensation;
    cout << "Hey,input the date of first employment in this format(dd / mm / yyyy) ";
    cin >> emp3.edate.day_of_month >> emp3.edate.month >> emp3.edate.year;

    cout << "Available Employee Type List \n1.laborer\n2.secretary\n3.manager\n4.accountant\n5.executive\n6.researcher)\nInput employee type (first letter only): ";
    cin >> first_letter;

    switch (first_letter)
    {
    case 'l':
        emp3.etype = laborer;
        break;
    case 's':
        emp3.etype = secretary;
        break;
    case 'm':
        emp3.etype = manager;
        break;
    case 'a':
        emp3.etype = accountant;
        break;
    case 'e':
        emp3.etype = executive;
        break;
    case 'r':
        emp3.etype = researcher;
        break;

    default:
        cout << "Input a valid letter" << endl;
        break;
    }

    // displaying details of three employees
    cout << endl
         << "Overall details of three employees" << endl;

    cout << "Employee ID" << setw(30) << "Employee's Compensation" << setw(30) << "Date of first employment" << setw(30) << "Employee Type" << endl;
    cout << setw(7) << emp1.emp_ID << setw(20) << emp1.emp_compensation << setw(30) << emp1.edate.day_of_month << "/" << emp1.edate.month << "/" << emp1.edate.year << setw(37);
    switch (emp1.etype)
    {
    case 0:
        cout << "Laborer" << endl;
        break;
    case 1:
        cout << "Secretary" << endl;
        break;
    case 2:
        cout << "Manager" << endl;
        break;
    case 3:
        cout << "Accountant" << endl;
        break;
    case 4:
        cout << "Executive" << endl;
        break;
    case 5:
        cout << "Researcher" << endl;
        break;
    default:
        cout << "Not reflecting here,unknown employee type" << endl;
        break;
    }

    cout << setw(7) << emp2.emp_ID << setw(20) << emp2.emp_compensation << setw(30) << emp2.edate.day_of_month << "/" << emp2.edate.month << "/" << emp2.edate.year << setw(37);
    switch (emp2.etype)
    {
    case 0:
        cout << "Laborer" << endl;
        break;
    case 1:
        cout << "Secretary" << endl;
        break;
    case 2:
        cout << "Manager" << endl;
        break;
    case 3:
        cout << "Accountant" << endl;
        break;
    case 4:
        cout << "Executive" << endl;
        break;
    case 5:
        cout << "Researcher" << endl;
        break;
    default:
        cout << "Not reflecting here,unknown employee type" << endl;
        break;
    }

    cout << setw(7) << emp3.emp_ID << setw(20) << emp3.emp_compensation << setw(30) << emp3.edate.day_of_month << "/" << emp3.edate.month << "/" << emp3.edate.year << setw(37);
    switch (emp3.etype)
    {
    case 0:
        cout << "Laborer" << endl;
        break;
    case 1:
        cout << "Secretary" << endl;
        break;
    case 2:
        cout << "Manager" << endl;
        break;
    case 3:
        cout << "Accountant" << endl;
        break;
    case 4:
        cout << "Executive" << endl;
        break;
    case 5:
        cout << "Researcher" << endl;
        break;
    default:
        cout << "Not reflecting here,unknown employee type" << endl;
        break;
    }
    cout<<endl;

    return 0;
}