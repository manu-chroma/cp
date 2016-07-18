#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int ar[1000007];
int main() {
    int long long n, k;
    cin >> n >> k;
    for(long long int i=1; i<= n ; i++) {
        cin >> ar[i];
    }

    for(long long int i = 1 ; i <= (n-k+1); i++) {
        long long int sum =0,yo=0,z=0;

        for(int j = 1; j <= k ; j++) {
                z = (j*j)%MOD;
                yo = (z*ar[i+j-1])%MOD;
            sum = (sum +  yo)%MOD;
        }
        cout << sum<< " ";
    }
}
