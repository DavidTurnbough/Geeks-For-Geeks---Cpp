//******************************************************************************
// Name: David Turnbough
// Date: Friday July 24, 2020
// Geeks For Geeks: Count Even Substrings
// https://practice.geeksforgeeks.org/problems/count-even-substrings/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        string input = "";

        cin >> input;

        int substrings = 0;

        for(int i = 0; i < input.length(); ++i)
        {
            int tempValue = 0;

            for(int j = 1; j < input.length() + 1 - i; ++j)
            {
                string temp = input.substr(i, j);

                stringstream convertor(temp);

                convertor >> tempValue;

                if(tempValue % 2 == 0)
                {
                    substrings++;
                }
            }
        }

        cout << substrings << endl;
    }

    return 0;
}

