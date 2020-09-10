//******************************************************************************
// Name: David Turnbough
// Date: January 7, 2018 Sunday
// Geeks for Geeks: Minimize the Sum of Product
// https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product/0
//******************************************************************************
#include <iostream>

#define MAX_SIZE 50

using namespace std;

void sort(int arr[], int size);

int main(int argc, char** argv)
{

    int testCases = 0;

    cin >> testCases;

    while (testCases--)
    {
        int size = 0;

        cin >> size;

        int a[MAX_SIZE] = {0};
        int b[MAX_SIZE] = {0};

        for(int i = 0; i < size; ++i)
        {
            cin >> a[i];
        }

        for(int i = 0; i < size; ++i)
        {
            cin >> b[i];
        }
        
        sort(a, size);
        
    }
    return 0;
}

void sort(int arr[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << arr[i] << endl;
    }
}