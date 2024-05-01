#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num;
    scanf("%d",&num);

    int result[num];

    for(int i=0; i<num; i++)
    {
        int trainLength;
        scanf("%d",&trainLength);

        int train[trainLength];
        for(int j=0; j<trainLength; j++)
        {
            scanf("%d",&train[j]);
        }
        result[i] = findMinSwaps(train, trainLength);

        int minSwaps = findMinSwaps(train, trainLength);
    }
    for(int i=0; i<num; i++)
    {
        printf("Optimal train swapping takes %d swaps.\n",result[i]);
    }
    return 0;
}
int findMinSwaps(int train[], int n)
{
    int swaps = 0;
    bool swapped;
    int temp = 0;

    for(int i=0; i<n-1; ++i)
    {
        swapped = false;
        for(int j=0; j<n-1; ++j)
        {
            //check if the elements are on the wrong order
            if(train[j]>train[j+1])
            {
                //swap elements
                //swap(train[j],train[j+1]);
                temp = train[j];
                train[j] = train[j+1];
                train[j+1] = temp;
                swapped = true;
                ++swaps;
            }
        }

        if(!swapped)
        {
            break;
        }
    }
    return swaps;

}
