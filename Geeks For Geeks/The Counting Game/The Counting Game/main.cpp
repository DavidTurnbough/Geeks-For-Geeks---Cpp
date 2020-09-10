//******************************************************************************
// Name: David Turnbough
// Date: Friday July 24, 2020
// Geeks For Geeks: The Counting Game !! 
// https://practice.geeksforgeeks.org/problems/the-counting-game/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        string sequence = "";
        
        cin >> sequence;
        
        // Count set to one for the first character in the sequence.
        int count = 1;
        
        for(int i = 0; i < sequence.length(); ++i)
        {
            if(isupper(sequence[i]))
            {
                count++;
            }
        }
        
        cout << count << endl;
    }
    
    
    return 0;
}

