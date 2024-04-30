//cpu limit exited
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,num,PrimeCount=0,flag,prime=1;
    cin >> num ;
    if(1<=num && num<500000)
    {
        while(num!=PrimeCount)
        {
            flag=0;
            prime++;
            for(i=2; i<=(prime/2); i++)
            {
                if(prime%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                PrimeCount++;
            }
        }
        cout << prime ;
    }
    return 0;
}


