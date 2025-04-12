#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Define the ordered_set template with a customizable comparator
template<typename T, typename Compare = less<T>>
using ordered_set = tree<T, null_type, Compare, rb_tree_tag, tree_order_statistics_node_update>;


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    ordered_set<pair<int, int> > ost;
    int ans = 0;
    for (int i=v.size()-1; i>=0; i++){
        ans+=ost.order_of_key({v[i],-1});
        ost.insert({v[i],i});
    }
    cout << ans << "\n";

return 0;
}
