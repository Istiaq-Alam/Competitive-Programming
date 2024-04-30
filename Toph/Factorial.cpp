#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cin>> n;

    if((n>0)&&(n<1000))
    {
        unsigned long long fact = factorial(n);

        if(n<7)
        {
            cout<<fact;
        }
        else if(n>=20)
        {
            cout << 0 ;
        }

    }
    return 0;
}

