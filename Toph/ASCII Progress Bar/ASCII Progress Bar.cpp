#include <bits/stdc++.h>
using namespace std;

int main()
{
    double l;
    string load = "..........";
    cin >> l;
    if(l>=0.0 && l<=100.0)
    {
        int p = floor(l);
        for(int i=0; i<(p/10); i++)
            load.replace(i, 1, "+");

        cout <<"["<<load<<"] "<<p<<"%"<<endl;
    }
}
