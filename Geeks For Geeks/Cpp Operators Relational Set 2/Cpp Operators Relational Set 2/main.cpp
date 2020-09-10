//******************************************************************************
// Name: David Turnbough
// Date: Tuesday May 28, 2019
// Geeks For Geeks: C++ Operators (Relational) | Set 2
// https://practice.geeksforgeeks.org/problems/c-operators-relational-set-2/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        int a = 0;
        int b = 0;
        
        cin >> a >> b;
        
        string comparison = "";
        
        if(a > b)
        {
            comparison = " is greater than ";
        }
        else if(a < b)
        {
            comparison = " is less than ";
        }
        else
        {
            comparison = " is equals to ";
        }
        
        cout << a << comparison << b << endl;
    }
    
    return 0;
}