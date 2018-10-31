#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n; cin >> n;
    string s; cin >> s;

    int es, others;
    es = others = 0;

    for(auto c: s) {
        if (c == '8') es++;
        else others++;
    }    

    int ans = 0;
    
    for(;es > 0 && others > 0;) {

        // grab an 8
        es--;

        // grab others if possible
        others -= 10;

        if(others >= 0) {
            ans++;
        } else if(others + es >= 0) {
            ans++;
            es += others; // reduce from es now
        }
    }

    // count remaining
    ans += (es/11);

    cout << ans << "\n";
    return 0;
}