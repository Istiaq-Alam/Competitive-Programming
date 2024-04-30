// Divisors
#include <iostream>
using namespace std;

int main()
{
    int a,i;
    cin >> a;

    if((a<100)&&(a>0))
    {
        for(i=1; i<=a; i++)
        {
            if(a%i==0)
            {
                cout<< i << endl;
            }

        }
    }
}


