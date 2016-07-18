#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--) {
        long long int n, volume =0;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << 4 << endl;
        else {
            volume = (n*n*2) + (n-2)*n*2 + 2*(n-2)*(n-2);
            cout << volume << endl;
        }

    }
}
