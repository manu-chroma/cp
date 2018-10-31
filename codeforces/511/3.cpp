#include <bits/stdc++.h>
using namespace std;

int gcd(int x,int y){return y?gcd(y,x%y):x;}


// only counting the primes upto sqrt().
int primes_count[]


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, int> arr1;
    for(auto& num: arr) {
        cin >> num;
    }

    int gc = gcd(arr[0], arr[1]);
    for(size_t i = 2; i < n; i++)
    {
        gc = gcd(gc, arr[i]);
    }

    for(auto& num: arr) {
        num /= gc;
    
        if(!arr1[num]) {
            arr1[num] = 1;
        } else {
            arr1[num] += 1;
        }
        
    }

    // cerr << "gc: " << gc << "\n";

    int max_nos = *(max_element(arr.begin(), arr.end()));
    // cerr << "max element: " << max_nos << "\n";

    // generate primes using sieve of eran
    unordered_map<int, int> primes_count;

    vector<bool> primes(max_nos + 1, true);

    for(int i = 2; i * i <= max_nos; i++) {

        if(primes[i] == true) {
        
            for(int j = 2 * i; j * j <= max_nos; j += i) {
                primes[j] = false;

                // only if the given element exists in the array
                if(arr1.find(j) != arr1.end())
                    primes_count[i] += arr1[j];
            }

        }
    }

    // add all primes
    for(auto num: arr) {

        if(num == 1) continue;

        if(primes[num] == true) {
            
            if(!primes_count[num]) {
                primes_count[num] = 1;
            } else {
                primes_count[num] += 1;
            } 
        }
    }

    int ans = -1, count;

    // for(auto it = primes_count.begin(); it != primes_count.end(); ++it) {
    //     cerr << "nos: " << it->first << " val: " << it->second << "\n"; 
    // }

    for(auto it: primes_count) {

        if(ans == -1) {
            ans = it.first;
            count = it.second;
        } else if(it.second > count) {
            ans = it.first;
            count = it.second;
        }
    } 

    if(ans == -1) {
        cout << -1 << "\n";
    } else {
        cout << n - count << "\n";  
    }
    
    return 0;
}