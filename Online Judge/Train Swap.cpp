#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMinSwaps(int train[], int n)
{
    int swaps = 0;
    bool swapped;

    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - 1 - i; ++j)
        {
            // Check if the elements are in the wrong order
            if (train[j] > train[j + 1])
            {
                // Swap elements
                swap(train[j], train[j + 1]);
                swapped = true;
                ++swaps;
            }
        }
        // If no swaps occurred in the inner loop, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }

    return swaps;
}

int main()
{
    int numTestCases;
    cin >> numTestCases;

    int results[numTestCases];

    for (int i = 0; i < numTestCases; ++i)
    {
        int trainLength;
        cin >> trainLength;

        int train[trainLength];
        for (int j = 0; j < trainLength; ++j)
        {
            cin >> train[j];
        }
        results[i] = findMinSwaps(train, trainLength);

        int minSwaps = findMinSwaps(train, trainLength);

    }
    for (int i = 0; i < numTestCases; ++i)
    {
        cout << "Optimal train swapping takes " << results[i] << " swaps." << endl;
    }

    return 0;
}

