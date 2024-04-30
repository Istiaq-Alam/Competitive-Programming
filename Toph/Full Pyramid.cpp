#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    int k=n;
    if((1<=n)&&(n<=100))
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {

                if (j >= k)
                    cout << "*";
                else
                    cout << "* ";
            }
            k--;
            cout << "\n";
        }

    }
}
