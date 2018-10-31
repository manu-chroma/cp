#include <bits/stdc++.h>
using namespace std;

bool valid(int a, int b, int c) {

    if(a + b <= c || a + c <= b || b + c <= a) {
        return false;
    } 

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);


    vector<int> a(3);
    for(auto & num: a) {
        cin >> num;
    }

    sort(a.begin(), a.end());
    int ans = 0;
    bool v = valid(a[0], a[1], a[2]);
    
    while(!v) {
        a[1]++;
        sort(a.begin(), a.end());
        v = valid(a[0], a[1], a[2]);
        ans++;
    }
    cout << ans << "\n";
    return 0;
}