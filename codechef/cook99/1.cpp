#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n; cin >> n;
    int k; cin >> k;

    vector<int> arr;
    arr.push_back(0);

    for(size_t i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    int ans = 0;
    for(size_t i = 1; i <= n; i++)
    {
        if(arr[i] - arr[i-1] > k) {
            int diff = arr[i-1];
            while(diff + k < arr[i]) {
                diff += k;
                ans++;
            }
        }
    }
    
    cout << ans << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);

    int tc;
    cin >> tc;
    while(tc--) solve();
    return 0;
}