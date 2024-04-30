#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin >> l >> r;
    int a=0,b=1,sum=0,i;
    for(; sum<=r;)
    {
        if(sum>=l && sum<=r)
        {
            cout << sum <<endl;
            sum = a+b;
            a=b;
            b=sum;
        }

        else
        {
            sum = a+b;
            a= b;
            b = sum;
        }
    }
}
