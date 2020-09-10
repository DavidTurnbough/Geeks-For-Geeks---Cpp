//******************************************************************************
// Name: David Turnbough
// Date: Monday July 20, 2020
// Geeks For Geeks: Sequence Of Sequence
// https://practice.geeksforgeeks.org/problems/sequence-of-sequence/0
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
        int maxElementInSequence = 0;
        int lengthOfSubsequence = 0;

        cin >> maxElementInSequence >> lengthOfSubsequence;

        int numberOfSequences = 0;

        int initialSequenceElement = 1;

        int numberOfSubsequences = 1;

        while(initialSequenceElement <= maxElementInSequence)
        {
            int previousElement = initialSequenceElement;
            int currentElement = initialSequenceElement + 1;
            
            while(currentElement <= maxElementInSequence)
            {
                if(currentElement >= (previousElement + previousElement) &&
                   currentElement > previousElement)
                {
                    cout << previousElement << " - " << currentElement << endl;
                    previousElement = currentElement;
                    numberOfSubsequences++;
                }

                if(numberOfSubsequences >= lengthOfSubsequence)
                {
                    numberOfSubsequences = 0;
                    numberOfSequences++;
                    cout << "number of sequences : " << numberOfSequences << endl;
                }

                currentElement++;
            }

            initialSequenceElement++;
        }

        cout << numberOfSequences << endl;
    }

    return 0;
}

