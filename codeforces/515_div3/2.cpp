#include <bits/stdc++.h>
using namespace std;

void update(int l, int r, int * heater) {

    
    for(size_t i = l; i < r; i++)
    {
        if(heater[i] == 0)
            heater[i] = 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);

    int n, r;
    cin >> n >> r;
    r--;

    int heater[n];
    
    for(size_t i = 0; i < n; i++)
    {
        int tmp; cin >> heater[i];
    }

    int curr = 0;   
    while(heater[curr] != 0) curr++;

    cerr << "val of curr: " << curr << "\n";

    int ans = 0;
    while (true) {
        
        if(curr == n-1) {
            break;
        }
        
        int farthest = -1;
        for(size_t i = curr; i <= r && i < n; i++)
        {
            if(heater[i] == 1) {
                farthest = i;
            }
        }
        
        // maybe it will pass in the reverse pass
        if(farthest == -1) {
            // step up just by one
            curr = min(n-1, curr + 1);
        } else {
            update(curr, min(curr + 2 * r, n-1), heater);
            ans++;
            curr += min(2*r + 1, n-1);
        }
    }

    cout << ans << "\n";

    
    for(size_t i = 0; i < n; i++)
    {
        cout << heater[i] << " ";
    }
    cout << "\n";
    
        
    return 0;
}