//******************************************************************************
// Name: David Turnbough
// Date: Tuesday May 28, 2019
// Geeks For Geeks: Print 1 To N Without Using Loops
// https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

void print(int n)
{
    if(n > 1)
    {
        print(n - 1);
    }
    cout << n << " ";
}

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        int n = 0;
        
        cin >> n;
        
        print(n);
        cout << endl;
    }
    
    return 0;
}