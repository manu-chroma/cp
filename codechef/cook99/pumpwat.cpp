#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> val_to_idx;

void do_job(vector<int> pump, vector<int>& vec) {

    int n = pump.size();

    stack<int> highest;
    for(size_t i = 0; i < n; i++)
    {
        if(!highest.empty())
            // cout << "stack top: " << highest.top() << "\n";

        if(highest.empty() == true) {
            vec[i] = 0;
            highest.push(pump[i]);
        } else if(pump[i] >= highest.top()) {
            while(highest.empty() == false && pump[i] >= highest.top()) {
                highest.pop();
            }

            if(highest.empty()) {
                cout << "val: " << pump[i] << "\n";
                vec[i] = i; // all elements towards the left
            } else {
                int idx = val_to_idx[highest.top()];
                vec[i] = i - idx - 1;
                highest.push(pump[i]);
            }

            highest.push(pump[i]);
        } else { // if the one before is bigger
            vec[i] = 0;
            highest.push(pump[i]);
        }
    }
}

void solve() {
    
    int n;
    cin >> n;
    
    vector<int> pump(n);

    for(size_t i = 0; i < n; i++)
    {
        cin >> pump[i];
        val_to_idx[pump[i]] = i;
    }

    // number of pumps smaller or equal to the given one
    // on both sides
    vector<int> left_max(n), right_max(n);

    do_job(pump, left_max);
    reverse(pump.begin(), pump.end());
    do_job(pump, right_max);
    reverse(pump.begin(), pump.end());

    vector<int> sorted(n);
    copy(pump.begin(), pump.end(), sorted.begin());
    sort(sorted.begin(), sorted.end());
    
    vector<int> ans(n, 0);
    
    for(size_t i = 0; i < n; i++)
    {
        int val = sorted[i];
        int idx = val_to_idx[val];

        int left = left_max[i];
        int right = right_max[i];

        int left_val = ans[i - left];
        int right_val = ans[i + right];

        if(left >= right) {
            ans[i - left] = 0;
            ans[i] = left + 1;
        } else {
            ans[i + right] = 0;
            ans[i] = right + 1;
        }
    }

    for(auto num: ans) {
        cout << num << " ";
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);

    int tc;
    cin >> tc;
    while(tc--) solve();
    return 0;
}