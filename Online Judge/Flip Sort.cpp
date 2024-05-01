#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the minimum number of flips required to sort the array
int minFlips(int arr[], int n)
{
    int flips = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in the unsorted part
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // If the minimum element is already in place, skip
        if (min_index == i)
        {
            continue;
        }

        // Otherwise, flip elements to move the minimum element to its correct position
        for (int j = min_index; j > i; j--)
        {
            swap(&arr[j], &arr[j - 1]);
            flips++;
        }
    }
    return flips;
}

int main()
{
    int i, n;
    int num=0;
    int result[num];

    while ((cin >> n) && n!=EOF)
    {
        if(n<=1000)
        {
            int arr[n];
            for (i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            result[num] = minFlips(arr, n);
            num=num+1;
        }
        else if(n==EOF){
            break;
        }
    }
    for(int i=0; i<num; i++)
    {
        cout << "Minimum exchange operations: " << result[i]<< endl;
    }

    return 0;
}
