//******************************************************************************
// Name: David Turnbough
// Date: Wednesday May 9, 2018
// Geeks for Geeks - C++ Function Overloading
// https://practice.geeksforgeeks.org/problems/c-function-overloading/0
//******************************************************************************
#include <iostream>

using namespace std;

int max(int firstValue, int secondValue);
char max(char firstValue, char secondValue);
double max(double firstValue, double secondValue);

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int choice = 0;

        cin >> choice;

        if(choice == 1)
        {
            int firstInteger = 0;
            int secondInteger = 0;

            cin >> firstInteger >> secondInteger;
            cout << max(firstInteger, secondInteger) << endl;

        }
        else if(choice == 2)
        {
            char firstCharacter = ' ';
            char secondCharacter = ' ';

            cin >> firstCharacter >> secondCharacter;
            cout << max(firstCharacter, secondCharacter) << endl;

        }
        else
        {
            double firstDouble = 0.0;
            double secondDouble = 0.0;

            cin >> firstDouble >> secondDouble;
            cout << max(firstDouble, secondDouble) << endl;
        }
    }

    return 0;
}

int max(int firstValue, int secondValue)
{
    return firstValue > secondValue ? firstValue : secondValue;
}

char max(char firstValue, char secondValue)
{
    return firstValue > secondValue ? firstValue : secondValue;
}

double max(double firstValue, double secondValue)
{
    return firstValue > secondValue ? firstValue : secondValue;
}