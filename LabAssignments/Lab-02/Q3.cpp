#include <iostream>
using namespace std;

int main()

{
    /*
    Q3:
     The National Earthquake Information Center has asked you to write a program implementing the
    following decision table to characterize an earthquake based on its Richter scale number.

    Richter Scale Number (n)            Characterization
    n < 5.0                              Little or no damage
    5.0<=n< 5.5                          Some damage
    5.5<=n< 6.5                          Serious damage: walls may crack or fall
    5.6<=n< 7.5                          Disaster: houses and buildings may collapse
    higher                              Catastrophe: most buildings destroyed


    Could you handle this problem with a switch statement? If so, use a switch statement; if not,
    explain Why?
    */

    cout << "Input the Richter Scale Reading: ";
    float reading;
    cin >> reading;

    const int LITTLE_OR_NO_DAMAGE = 0;
    const int SOME_DAMAGE = 1;
    const int SERIOUS_DAMAGE = 2;
    const int DISASTER = 3;
    const int CATASTROPHE = 4;

    if (reading < 5.0)
        reading = LITTLE_OR_NO_DAMAGE;
    if (reading >= 5.0 && reading < 5.5)
        reading = SOME_DAMAGE;
    if (reading >= 5.5 && reading < 6.5)
        reading = SERIOUS_DAMAGE;
    if (reading >= 6.5 && reading < 7.5)
        reading = DISASTER;
    if (reading >= 7.5)
        reading = CATASTROPHE;

    cout << "This reading is characterised as, ";

    switch ((int)reading)
    {
    case LITTLE_OR_NO_DAMAGE:
        cout << "Little Or No Damage" << endl;
        break;
    case SOME_DAMAGE:
        cout << "Some Damage" << endl;
        break;
    case SERIOUS_DAMAGE:
        cout << "Serious Damagee: walls may crack or fall" << endl;
        break;
    case DISASTER:
        cout << "Disaster: houses and buildings may collapse" << endl;
        break;
    case CATASTROPHE:
        cout << "Catastrophe: most buildings destroyed" << endl;

        break;

    default:
        cout << "Error, Please type reading again.";
    }

    return 0;
}