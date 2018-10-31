#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;
    int ans = 0;
    for(size_t i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        if(t2 - t1 > 5) ans++;
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