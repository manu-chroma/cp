#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> sum(n);
    int k_start = -1;
    for(auto & num: sum) {
        cin >> num;

        if(k_start == -1 || k_start < num) {
            k_start = num;
        }
    }

    // brute over value of k
    for(int i = k_start;; i++) {
        int sum_a = 0;
        for(auto num: sum) {
            sum_a += (i - num);
        }

        if(sum_a > (n * i - sum_a)) {
            cout << i << "\n";
            return 0;
        } 
    }

    return 0;
}