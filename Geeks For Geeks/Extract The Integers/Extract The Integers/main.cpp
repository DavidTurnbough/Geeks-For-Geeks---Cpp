//******************************************************************************
// Name: David Turnbough
// Date: Sunday May 25, 2019
// Geeks For Geeks: Extract The Integers
// https://practice.geeksforgeeks.org/problems/extract-the-integers/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    cin.get();
    
    while(testCases--)
    {
        string input = "";
        
        getline(cin, input);
        
        int index = 0;
        
        string output = "";
        
        while(index < input.length())
        {
            if(isdigit(input[index]))
            {
                while(isdigit(input[index]))
                {
                    output  += input[index];
                    index++;
                }
                output += ' ';
            }
            index++;
        }
        
        output = output.length() > 0 ? output : "No Integers";
        
        cout << output << endl;
    }

    return 0;
}