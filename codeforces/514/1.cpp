#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, l, a;
    cin >> n >> l >> a;
    
    int ans = 0;
    int first = 0, last = l;
    vector<pair<int, int>> diff;
    for(int i = 0; i < n; i++) {
        int l1, l2;
        cin >> l1 >> l2;

        diff.push_back(make_pair(l1, l1 + l2));
    }

    for(int i = 1; i < n; i++) {
        int l1, l2;
         
        l1 = diff[i-1].second;
        l2 = diff[i].first;

        ans += (l2 - l1)/a;
    }

    if(n == 0) {
        ans += last/a;
    } else {
        ans += diff[0].first/a;
        ans += (l - diff[n-1].second)/a;
    }

    cout << ans << "\n";

    return 0;
}