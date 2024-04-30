#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    if(0<y && y<9999)
    {
        if(y%4==0 && y%400!=0)
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}
