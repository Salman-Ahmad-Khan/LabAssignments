#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPlaindrome(string s, int first_index, int last_index)
{

    // base case
    if (first_index >= last_index) // if first and last letter matches
    {
        return true;
    }

    else
    {
        if (s[first_index] != s[last_index]) // if first and last letter mismatches
        {
            return false;
        }
        else
        {
            return checkPlaindrome(s, first_index + 1, last_index - 1); // recurse to next pair of letters
        }
    }
}

int main()
{
    /*
    Q1.
     A  palindrome  consists  of  a  word  or  deblanked,  unpunctuated  phrase  that  is  spelled
    exactly  the  same  when  the  letters  are  reversed.  Write  a  recursive  function  that  returns  a
    value of 1 if its string argument is a palindrome. Notice that in palindromes such as level,
    deed, sees, and Madam I’m Adam  (madamimadam),the  first  letter  matches  the  last,  the
    second matches the next-to-last, and so on.
     */

    cout << "Input any string without whitespaces: ";
    string s;
    getline(cin, s);

    int len = s.length();

    if (checkPlaindrome(s, 0, len - 1)) // passing string s and first index and last index
    {
        cout << "'" << s << "' is a palindrome" << endl;
    }
    else
    {
        cout << "'" << s << "' is not a palindrome" << endl;
    }

    return 0;
}