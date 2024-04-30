#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin >> str)
    {
        int f = 0;
        for(char c : str)
            if(c > 96)
                f = 1;
        if(f)
            cout << str << ' ';
    }
}
