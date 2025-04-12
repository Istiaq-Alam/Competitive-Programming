#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);                        // template

    // vector<int> v; // vector
    // v.push_back(0);

    // v[0];

    //cout << *v.begin()<<endl;

    set<int> set1;          //Set is Like vector
    set1.insert(0);
    set1.insert(1);
    set1.insert(2);
    set1.insert(5);
    set1.insert(7);
    set1.insert(9);

    cout << "All the set Elements :" ;
    for(auto it:set1)
    cout << it <<" ";

    cout <<(*lower_bound(set1.begin(), set1.end(), 6))<<endl;

    cout << *set1.lower_bound(6)<<endl;



    // MultiSet is a set that can have duplicate value/elements





















    return 0;
}

