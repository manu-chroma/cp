#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    long long int a, b;
    cin >> a >> b;
    long long int start = sqrt(2 * (a + b));

    long long int bound = (start * (start + 1));
    // cout << bound << "\n";
    // cout << "actual bound: " << 2 * (a+b) << "\n";
    if(bound > 2 * (a+b)) {
        start--;
    }

    // cout << start << "\n";

    vector<int> d1, d2;
    int sum1 = 0, sum2 = 0;

    for(int i = start; i >= 1; i--) {
        if(a - sum1 >= i) {
            sum1 += i;
            d1.push_back(i);
        } else {
            sum2 += i; 
            d2.push_back(i);
        }
    }

    cout << d1.size() << "\n";
    for(auto num: d1) {
        cout << num << " ";
    }
    cout << "\n";
    cout << d2.size() << "\n";
    for(auto num: d2) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}