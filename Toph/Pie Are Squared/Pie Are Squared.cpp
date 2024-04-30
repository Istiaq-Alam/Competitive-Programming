#include <bits/stdc++.h>
using namespace std;
int main(){
    int r;
    double A;
    double pie = acos(-1);
    cin >> r ;
    if(0<r && r<2000){
        A = pie*r*r;
        cout << A;
    }
}
