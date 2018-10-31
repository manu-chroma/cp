#include <bits/stdc++.h>
using namespace std;

void solve() {

    int last;
    cin >> last;

    int lan, lr, rr;
    cin >> lan >> lr >> rr;

    int total = last / lan;
    int reduce = (rr/lan) - (lr - 1)/lan;

    cout << total - reduce << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);

    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    } 
        

    return 0;
}

// 10 2 3 7 