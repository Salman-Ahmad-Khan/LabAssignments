#include <iostream>
using namespace std;

int main()

{
    /*
    Q5:
    Write a program that interacts with the user like this:
(1) Carbon monoxide
(2) Hydrocarbons
(3) Nitrogen oxides
(4) Nonmethane hydrocarbons

Enter polluutant number>> 2
Enter number of grams emitted per mile>> 0.35
Enter odometer reading>> 40112
Emissions exceed permitted level of 0.31 grams/mile.

 Use the table of emissions limits below to determine the appropriate message.

                            First 50,000 Miles        Second 50,000 Miles

carbon Monoxide monoxide     3.4 grams/mile             4.2 grams/mile
hydrocarbons                 0.31 grams/mile            0.39 grams/mile
nitrogen oxides              0.4 grams/mile             0.5 grams/mile
Nonmethane hydrocarbons      0.25 grams/mile            0.31 grams/mile
    */

    cout << "Given pollutants" << endl
         << "(1) Carbon monoxide" << endl
         << "(2) Hydrocarbons" << endl
         << "(3) Nitrogen oxides" << endl
         << "(4) Nonmethane hydrocarbons" << endl
         << "Input pollutant  number: ";

    int pollutantNumber;
    cin >> pollutantNumber;

    cout << "Enter number of grams emitted per mile ";
    double gramsPerMile;
    cin >> gramsPerMile;

    cout << "Enter odometer reading ";
    int odometerReading;
    cin >> odometerReading;

    double tableValue;

    if (pollutantNumber == 1 && odometerReading <= 50000)
    {
        tableValue = 3.4;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of"
                 <<  tableValue
                 << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else if (pollutantNumber == 2 && odometerReading <= 50000)
    {
        tableValue = 0.31;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of " << tableValue << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else if (pollutantNumber == 3 && odometerReading <= 50000)
    {
        tableValue = 0.4;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of " << tableValue << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else if (pollutantNumber == 4 && odometerReading <= 50000)
    {
        tableValue = 0.25;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of " << tableValue << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else if (pollutantNumber == 1 && odometerReading >= 50000)
    {
        tableValue = 4.2;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of " << tableValue << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else if (pollutantNumber == 2 && odometerReading >= 50000)
    {
        tableValue = 0.39;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of " << tableValue << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else if (pollutantNumber == 3 && odometerReading >= 50000)
    {
        tableValue = 0.5;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of " << tableValue << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else if (pollutantNumber == 4 && odometerReading >= 50000)
    {
        tableValue = 0.31;

        if (gramsPerMile > tableValue)
        {
            cout << "Emissions exceed permitted level of " << tableValue << " grams/mile" << endl;
        }
        else
            cout << "Looks like you're good " << endl;
    }
    else
        cout << " This is not supposed to happen" << endl;

    return 0;
}