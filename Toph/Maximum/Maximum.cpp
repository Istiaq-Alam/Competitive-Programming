#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,max=0;
    cin >> n;
    if(0<n && n<100)
    {
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(i=0; i<n; ++i)
        {
            if(arr[i]>max)
                max = arr[i];
        }
        cout << max<<endl;
    }
    return 0;

}
