#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> intervals;
    unordered_map<int, int> time_to_type;
    for(size_t i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        
        time_to_type[t1] = 0;
        
        // do not overwrite any incoming time
        if(!time_to_type[t2])
            time_to_type[t2] = 1;

        intervals.push_back(t1);
        intervals.push_back(t2);
    }

    sort(intervals.begin(), intervals.end());

    // process queries
    for(size_t i = 0; i < m; i++)
    {
        // find the number
        int p; cin >> p;
        int ans;

        auto it = lower_bound(intervals.begin(), intervals.end(), p);

        // check out of bounds
        if(it == intervals.end()) {
            ans = -1;
        }

        else if(time_to_type[*it] == 0) {
            ans = max(0, *it - p);
        }
        
        // fall back
        else if(time_to_type[*it] == 1 && *it > p) {
            int idx = distance(intervals.begin(), it);

            ans = 0;
        } 

        // found a ending point
        else if(time_to_type[*it] == 1 && p >= *it) {
            // use it itself for upper bound and 
            // find first starting point
            it = upper_bound(intervals.begin(), intervals.end(), *it);

            if(it == intervals.end()) {
                ans = -1;
            } else {
                // assert(time_to_type[*it] == 0);
                ans = *it - p;
            }
        }

        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);

    int tc;
    cin >> tc;
    while(tc--) solve();

    return 0;
}