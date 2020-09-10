//******************************************************************************
// Name: David Turnbough
// Date: Tuesday July 28, 2020
// Geeks For Geeks: Express As Sum Of Power Of Natural Numbers
// https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int findPowerSum(int value, int power, int currentValue)
{

    if(value == 0)
    {
        return 1;
    }
    else if(value < 0 || currentValue <= 0)
    {
        return 0;
    }
    else
    {
        currentValue--;
        return(findPowerSum(value, power, currentValue) + findPowerSum(value - (int) pow(currentValue, power), power, currentValue));
    }
}

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int value = 0;
        int power = 0;

        cin >> value >> power;

        cout << findPowerSum(value, power, (int)ceil(pow(value, (1.0 / power)) + 1)) << endl;
    }

    return 0;
}