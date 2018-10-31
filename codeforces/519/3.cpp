#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    // len a prefixes
    vector<int> lens;
    int count = 0;
    for(size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a') {
            count++;
        } else {
            if(count == 0) continue;

            lens.push_back(count);
            count = 0;
        }
    }

    // max so far 
    int maxi = -1
    
    // string inverted and non-inverted at each point
    int dp[s.size()][2];

    // search all the strings upto current point 
    // and choose to invert and the smallest and the largest
    for(int i = 1; i < s.size(); i++) {
        // 
    }
    
    
    return 0;
}