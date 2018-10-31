#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> arr(n+1);
    arr[0] = 0;
    
    for(size_t i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> poss;

    // brute over value of n
    for(int k = 1; k <= n; k++) {

        unordered_map<int, int> idx_map;
        bool possible = true;

        // iterate over a
        for(size_t i = 1; i <= n; i++)
        {
            // generate and validate with the previous value
            int diff = arr[i] - arr[i-1];
            int idx = (i-1) % k;

            cout << idx << "\n";

            if(idx_map[idx] && idx_map[idx] != diff) {
                possible = false;
                break;
            } 
            
            idx_map[idx] = diff;
        } 

        if(possible) {
            poss.push_back(k);
        }
    }


    cout << poss.size() << "\n";
    for(auto num: poss) {
        cout << num << " ";
    }
    cout << "\n";
    
    
    return 0;
}