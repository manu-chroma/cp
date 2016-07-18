#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);

    int test[101] = {0}, out[101] = {0};
    int frnds;
    cin >> frnds;
    for(int i = 1 ; i <= frnds ; i++) {
        cin >> test[i];
    }
    for(int i = 1 ; i <= frnds ; i++) {
        out[test[i]] = i;
    }
    for(int i = 1 ; i <= frnds ; i++) {
        cout << out[i] << " ";
    }
}