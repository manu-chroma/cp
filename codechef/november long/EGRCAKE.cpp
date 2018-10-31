#include<bits/stdc++.h>
using namespace std;
long long int ar[100000];
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        long long int m,n,i;
        cin >> n >> m;
        while(tc--) {
            for(i = 0 ; i<n ; i++) {
                if(i < n)
                    ar[i] = n+i;
                else ar[i] = i;
            }
        }
    }
}
