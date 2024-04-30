#include <bits/stdc++.h>

using namespace std;

int main()
{

    char* str1 ;
    cin >> str1;
    int i, b=0;
    int over;
    int res1 = atoi(str1);

    for(i=0; i<sizeof(res1); i++)
    {

        if(res1.at(i)==1 ||res1.at(i)==2 || res1.at(i)==3 ||
                res1.at(i)==4 || res1.at(i)==5 || res1.at(i)==6 || res1.at(i)==0 )
            b=b+1;

    }

    //if(b>=6)
    {
        over = b / 6;
        b = b % 6;
    }
    (b==0) ? cout << over << " Over " : cout << "";



    cout << over << " Over " << b <<" Ball";


}

