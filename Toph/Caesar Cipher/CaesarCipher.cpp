#include <bits/stdc++.h>
#include <string.h>
#include <cstdio>
using namespace std;

int main()
{
    int i, length, n;
    char word[105];
    scanf("%d ",&n);
    gets(word);
    length = strlen(word);
    for(i = 0; i < length; i++)
    {
        if((word[i] >= 65 && word[i] <= 90) || (word[i] >= 97 && word[i] <= 122) )
        {
            if(word[i] - n < 97)
            {
                word[i] = 123-(97-(word[i]-n));
            }
            else
            {
                word[i] = word[i] - n;
            }
        }

    }
    cout << word;
}
