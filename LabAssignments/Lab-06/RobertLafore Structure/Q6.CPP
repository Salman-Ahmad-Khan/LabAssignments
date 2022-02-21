#include <iostream>
#include <bits/stdc++.h>
using namespace std;

enum emp_type
{
    //Available Employee Type List
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};
emp_type etype; // declare a variable of type emp_type

int main()
{

    /*
    We said earlier that C++ I/O statements don’t automatically understand the data types of
    enumerations. Instead, the (>>) and (<<) operators think of such variables simply as integers. You can overcome this limitation by using switch statements to translate between
    the user’s way of expressing an enumerated variable and the actual values of the enumerated variable. For example, imagine an enumerated type with values that indicate an
    employee type within an organization:
    enum etype { laborer, secretary, manager, accountant, executive,
    researcher };
    Write a program that first allows the user to specify a type by entering its first letter
    (‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
    enum etype, and finally displays the complete word for this type.
    Enter employee type (first letter only)
    laborer, secretary, manager,
    accountant, executive, researcher): a
    Employee type is accountant.
    You’ll probably need two switch statements: one for input and one for output.
    */

    cout << "\nAvailable Employee Type List \n1.laborer\n2.secretary\n3.manager\n4.accountant\n5.executive\n6.researcher)\nInput employee type (first letter only): ";

    char first_letter;
    cin >> first_letter;

    switch (first_letter)
    {
    case 'l':
        etype = laborer;
        break;
    case 's':
        etype = secretary;
        break;
    case 'm':
        etype = manager;
        break;
    case 'a':
        etype = accountant;
        break;
    case 'e':
        etype = executive;
        break;
    case 'r':
        etype = researcher;
        break;

    default:
        cout << "Input a valid letter" << endl;
        break;
    }

    switch (etype)
    {
    case 0:
        cout << "Employee type is laborer" << endl;
        break;
    case 1:
        cout << "\nEmployee type is secretary" << endl;
        break;
    case 2:
        cout << "\nEmployee type is manager" << endl;
        break;
    case 3:
        cout << "\nEmployee type is accountant" << endl;
        break;
    case 4:
        cout << "\nEmployee type is executive" << endl;
        break;
    case 5:
        cout << "\nEmployee type is researcher" << endl;
        break;
    default:
        cout << "Not reflecting here,unknown employee type" << endl;
        break;
    }

    return 0;
}