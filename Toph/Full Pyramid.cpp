#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=(N-i); j++)
            cout<<" ";
        for(int k=1; k<=i; k++)
        {
            if(k==i)
                cout<<"*";
            else
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
