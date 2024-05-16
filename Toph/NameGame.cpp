#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string R;
        cin >> R;
        transform(R.begin(), R.end(), R.begin(), ::tolower);
        if (R!= "a")
        {
            cout << "a"<<endl;
        }
        else
        {
            cout << "b"<<endl;
        }
    }
    return 0;
}
