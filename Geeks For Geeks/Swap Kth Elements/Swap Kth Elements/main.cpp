//******************************************************************************
// Name: David Turnbough
// Date: Tuesday May 28, 2019
// Geeks For Geeks: Swap Kth Elements
// 
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
        int size = 0;
        int swapIndex = 0;
        
        cin >> size >> swapIndex;
        
        int arr[size];
        
        for(int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
        
        int temp = arr[swapIndex - 1];
        arr[swapIndex - 1] = arr[size - swapIndex];
        arr[size - swapIndex] = temp;
        
        for(int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}