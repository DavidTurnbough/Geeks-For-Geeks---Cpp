//******************************************************************************
// Name: David Turnbough
// Date: Wednesday July 29, 2020
// Geeks For Geeks: Black And White
// https://practice.geeksforgeeks.org/problems/black-and-white/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

int answer(int width, int height, int currentXPosition, int currentYPosition, int enemyXPosition, int enemyYPosition)
{
    if(currentXPosition > width || currentXPosition <= 0 ||
       currentYPosition > height || currentYPosition <= 0 ||
       currentXPosition == enemyXPosition || currentYPosition == enemyYPosition)
    {
        cout << "IF   : " << width << " " << height << " " << currentXPosition << " " << currentYPosition << " "
             << enemyXPosition << " " << enemyYPosition << endl;

        return 0;
    }
    else
    {
        cout << "ELSE : " << width << " " << height << " " << currentXPosition << " " << currentYPosition << endl;

        return(1 +
               answer(width, height, currentXPosition + 2, currentYPosition + 1, enemyXPosition, enemyYPosition) +
               answer(width, height, currentXPosition + 2, currentYPosition - 1, enemyXPosition, enemyYPosition) +
               answer(width, height, currentXPosition - 2, currentYPosition + 1, enemyXPosition, enemyYPosition) +
               answer(width, height, currentXPosition - 2, currentYPosition - 1, enemyXPosition, enemyYPosition));
    }
}

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int width = 0;
        int height = 0;

        cin >> width >> height;

        cout << answer(width, height, 1, 1, width, height) << endl;
    }

    return 0;
}