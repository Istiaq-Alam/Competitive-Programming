#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    bool prime=true;
    cin >> num;
    if(num==0 || num==1)
        cout << "No";
    else if(0<num && num<1000)
    {
        for(int i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                prime = false;
                break;
            }
        }
        if(prime)
            cout << "Yes";
        else
            cout << "No";
    }
}

