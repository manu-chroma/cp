#include <bits/stdc++.h>

using namespace std;

vector<long long int> primes;

void prime_factors(long long int n) 
{ 
    // Print the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        primes.push_back(2);
        n = n/2;
    } 
  
    for (long long int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            primes.push_back(i);
            n = n/i; 
        } 
    } 
  
    if (n > 2) {
        primes.push_back(n); 
    }
        
} 

int main() {

    ios_base::sync_with_stdio(false);

    long long int n, m, k;
    cin >> n >> m >> k;

    long long int m1 = m;

    long double area = 2 * n;

    if(m % k == 0) {
        m /= k;
    } else {
        area /= k;
    }

    area *= m;
    // cout << "area: " << area << "\n";

    prime_factors((long long int)area);

    vector<int> base1, height1;

    m = m1;

    // match prime factors of area to n and m max
    long long int height = 1, base = 1;
    
    for(auto num: primes) {

        // cout << "num: " << num << " base: " << base << " m: " << m << "\n";

        if(num * height <= n) {
            height *= num;
            // height1.push_back(num);
        } else if (num * base <= m) {
            // cout << "going in and " << num << "\n";  
            base *= num;
            // base1.push_back(num);
        } 
        else {

            // cout << height << " " << base << "\n";
            cout << "NO\n";
            return 0;
        }
    }

    // print ans
    cout << "YES\n";
    cout << "0 0\n";
    cout << height << " 0\n";
    cout << height/2 << " " << base << "\n";

    return 0;
}