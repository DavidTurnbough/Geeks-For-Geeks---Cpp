//******************************************************************************
// Name: David Turnbough
// Date: Wednesday May 9, 2018
// Geeks for Geeks - C++ Program to Remove Consonants From a String
// https://practice.geeksforgeeks.org/problems/c-program-to-remove-consonants-from-a-string/0
//******************************************************************************
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;
    cin.ignore();

    while(testCases--)
    {
        string inputString = "";
        string outputString = "";

        getline(cin, inputString);

        for(int i = 0; i < inputString.length(); ++i)
        {
            char currentCharacter = inputString[i];

            switch(currentCharacter)
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                case ' ':
                    outputString += currentCharacter;
                    break;
            }
        }

        if(outputString.length() == 0)
        {
            cout << "No Vowel" << endl;
        }
        else
        {
            cout << outputString << endl;
        }
    }

    return 0;
}