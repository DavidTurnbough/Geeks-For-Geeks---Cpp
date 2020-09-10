//******************************************************************************
// Name: David Turnbough
// Date: Tuesday May 28, 2019
// Geeks For Geeks: Sum Of GP
// https://practice.geeksforgeeks.org/problems/sum-of-gp/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int numberOfTerms = 0;
        int firstTerm = 0;
        int ratio = 0;

        cin >> numberOfTerms >> firstTerm >> ratio;

        double sum = 0.0;

        if(ratio != 1.0)
        {
            sum = (firstTerm * (1 - pow(ratio, numberOfTerms))) / (1 - ratio);
        }
        else
        {
            sum = numberOfTerms * firstTerm;
        }

        cout << setprecision(6) << fixed << sum << endl;
    }

    return 0;
}