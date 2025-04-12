#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Define the ordered_set template with a customizable comparator
template<typename T, typename Compare = less<T>>
using ordered_set = tree<T, null_type, Compare, rb_tree_tag, tree_order_statistics_node_update>;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ordered_set<int> st;
    st.insert(0);
    st.insert(1);
    st.insert(2);
    st.insert(5);
    st.insert(7);
    st.insert(8);

    cout<<*st.find_by_order(3)<<endl;
    // cout<<st.order_of_key(6)<<endl;

    // cout<<*st.lower_bound(6)<<'\n';

    // cout<<distance(st.begin(), st.lower_bound(6))<<endl;

    return 0;
}
