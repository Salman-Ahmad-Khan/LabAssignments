#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to check the Vowel
bool isVowel(char c)
{
   
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// to count total number of vowels from 0 to n
int countVovels(string str, int n)
{
    if (n == 1)
        return isVowel(str[n - 1]);
    else
        return countVovels(str, n - 1) + isVowel(str[n - 1]);
}
int main()
{

    // Q3.
    // Write a recursive  function that counts the number of vowels in a string.

    cout << "Input any string: ";
    string str;
    getline(cin, str);

    // Total numbers of Vowel
    cout << "'" << str << "' contains '" << countVovels(str, str.length()) << "' vowel(s)" << endl;

    return 0;
}
