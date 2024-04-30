#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)  //stopping condition
        return n;
    else  //recursive part
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n;
    cin >> n;
    if((n>0)&&(n<50))
    {
        cout << fib(n);
    }
}

