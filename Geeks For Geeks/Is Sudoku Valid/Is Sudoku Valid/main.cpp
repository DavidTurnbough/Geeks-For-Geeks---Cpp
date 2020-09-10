//******************************************************************************
// Name: David Turnbough
// Date: Tuesday July 28, 2020
// Geeks For Geeks: Is Sudoku Valid
// https://practice.geeksforgeeks.org/problems/is-sudoku-valid/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

#define ROW 9
#define COL 9

using namespace std;

bool checkRow(int mat[ROW][COL], int row)
{
    bool isValid = true;

    for(int i = 0; i < ROW && isValid; ++i)
    {
        int temp = mat[row][i];

        if(temp != 0)
        {
            for(int j = i + 1; j < ROW - 1 && isValid; ++j)
            {
                if(mat[row][j] == temp)
                {
                    isValid = false;
                }
            }
        }
    }

    return isValid;
}

bool checkCol(int mat[ROW][COL], int col)
{
    bool isValid = true;

    for(int i = 0; i < COL && isValid; ++i)
    {
        int temp = mat[i][col];

        if(temp != 0)
        {
            for(int j = i + 1; j < COL - 1 && isValid; ++j)
            {
                if(mat[j][col] == temp)
                {
                    isValid = false;
                }
            }
        }
    }

    return isValid;
}

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int mat[ROW][COL] = {};
        
//        int mat[ROW][COL] = {
//            {3, 0, 6, 5, 0, 8, 4, 0, 0},
//            {5, 2, 0, 0, 0, 0, 0, 0, 0},
//            {0, 8, 7, 0, 0, 0, 0, 3, 1},
//            {0, 0, 3, 0, 1, 0, 0, 8, 0},
//            {9, 0, 0, 8, 6, 3, 0, 0, 5},
//            {0, 5, 0, 0, 9, 0, 6, 0, 0},
//            {1, 3, 0, 0, 0, 0, 2, 5, 0},
//            {0, 0, 0, 0, 0, 0, 0, 7, 4},
//            {0, 0, 5, 2, 0, 6, 3, 0, 0}};

        for(int i = 0; i < ROW; ++i)
        {
            for(int j = 0; j < COL; ++j)
            {
                cin >> mat[i][j];
            }
        }

        bool isValid = true;

        for(int i = 0; i < ROW && isValid; ++i)
        {
            for(int j = 0; j < COL && isValid; ++j)
            {
                if(mat[i][j] != 0)
                {
                    if(!checkRow(mat, i) && isValid)
                    {
                        isValid = false;
                    }

                    if(!checkCol(mat, j) && isValid)
                    {
                        isValid = false;
                    }
                }
            }
        }

        if(isValid)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}

