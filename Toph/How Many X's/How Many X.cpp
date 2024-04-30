#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;

    for(int i=0; i<str.size(); i++)
    {
        if(str.at(i)=='X')
            count++;
    }
    if(count<=100)
        cout << count << endl;
    return 0;
}
