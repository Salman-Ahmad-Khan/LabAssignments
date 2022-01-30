#include <iostream>
using namespace std;


void BodyMassIndex(float weight, float height)
{
    float BMI = 730 * weight / height * height; // calculate BMI

    // Conditions to find out BMI category
    cout << "Body Mass Index(BMI) is " << BMI << " and Weight Status is ";
    if (BMI < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        cout << "Normal" << endl;
    }
    else if (BMI >= 25.0 && BMI <= 29.9)
    {
        cout << "Overweight" << endl;
    }
    else if (BMI >= 30.0)
    {
        cout << "Obese" << endl;
    }


// short way
//Conditions to find out BMI category using ternary operators
    // BMI < 18.5 ? cout<<("Underweight ") : (BMI >= 18.5 && BMI <= 24.9)  ? cout<<("Normal ") : (BMI >= 25.0 && BMI <= 29.9)? cout<<("Overweight ") : (BMI >= 30.0) ? cout<<("Obese ") : cout<<("Input correct details!");
}

int main()

{
    /*
    Q2:
     Write a program that calculates the user’s body mass index (BMI) and categorizes it as
    underweight, normal, overweight, or obese, based on the following table from the United States
    Centers for Disease Control:
    BMI              Weight Status

    Below 18.5         Underweight
    18.5–24.9          Normal
    25.0–29.9          Overweight
    30.0 and above     Obese

    To calculate BMI based on weight in pounds ( wt_lb ) and height in inches ( ht_in ), use this
    formula (rounded to tenths):

    703 * wt_lb /ht_in2

    Prompt the user to enter weight in pounds and height in inches
    */

    cout << "Input weight in pounds and height in inches: ";
    float weight, height;
    cin >> weight >> height;

    BodyMassIndex(weight, height); // calling the BMI function

    return 0;
}


