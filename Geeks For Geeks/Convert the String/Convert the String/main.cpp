//******************************************************************************
// Name: David Turnbough
// Date: Wednesday May 9, 2018
// Geeks for Geeks - Convert the String
// https://practice.geeksforgeeks.org/problems/convert-the-string/0
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
                    break;
                default:
                    if(isupper(currentCharacter))
                    {
                        currentCharacter = tolower(currentCharacter);
                    }
                    else
                    {
                        currentCharacter = toupper(currentCharacter);
                    }

                    outputString += "#";
                    outputString += currentCharacter;
            }
        }
        cout << outputString << endl;
    }
    return 0;
}