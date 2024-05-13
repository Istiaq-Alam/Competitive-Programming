#include <bits/stdc++.h>
using namespace std;
string s;
int main ()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 's')
            cout << '$';
        else if (s[i] == 'i')
            cout << '!';
        else if (s[i] == 'o')
            cout << "()";
        else
        {
            if (i == 0 and isalpha(s[i]))
                s[i] = toupper(s[i]);
            cout << s[i];
        }
    }
    cout << "." << endl;
    return 0;
}
