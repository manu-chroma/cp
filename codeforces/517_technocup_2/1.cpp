#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int w, h, k;
    cin >> w >> h >> k;

    int ans = 0;
    
    for(size_t i = 0; i < k; i++)
    {
        ans += 2 * w;
        ans += 2 * (h - 2);
        w -= 4;
        h -= 4;
    }

    cout << ans << "\n";
    return 0;
}