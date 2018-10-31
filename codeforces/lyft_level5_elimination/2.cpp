#include <bits/stdc++.h>
using namespace std;

bool check_prime(long long int n) 
{ 
    if (n <= 1) 
     return false; 
    if (n <= 3)
      return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (long long int i=5; i*i<=n; i=i+6) 
        if (n % i == 0 || n % (i+2) == 0) 
           return false; 
  
    return true; 
} 

void solve() {
    long long int a, b;
    cin >> a >> b;
    
    if(a-b == 1 && check_prime(a + b)) {
        cout << "YES\n"; 
    } else {
        cout << "NO\n";
    }

}


int main() {
    ios_base::sync_with_stdio(false);

    int tc;
    cin >> tc;
    
    while(tc--) solve();

    return 0;
}