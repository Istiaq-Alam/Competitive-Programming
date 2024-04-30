#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    if(0<N && M<100)
    {
        // Create two sets to store the elements
        set<int> set1, set2;

        // Read elements for the first set
        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;
            set1.insert(num);
        }

        // Read elements for the second set
        for (int i = 0; i < M; i++)
        {
            int num;
            cin >> num;
            set2.insert(num);
        }

        // Create a new set to store the union
        set<int> unionSet;

        // Use set_union algorithm to efficiently combine elements
        set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
                  inserter(unionSet, unionSet.begin()));

        // Print the elements of the union set
        int count = 0;
        for (auto i : unionSet)
        {
            cout << i;
            count++;
            if(count<unionSet.size())
            cout << " ";
        }
    }
    return 0;
}
