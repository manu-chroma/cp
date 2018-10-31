#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    long long int a, b, x, y;
    cin >> a >> b >> x >> y;

    // reduce x and y
    long long int tmp = __gcd(x, y);
    x /= tmp; y /= tmp;

    long long int num   = a / x;
    long long int denom = b / y;

    cout << min(num, denom) << "\n";

    return 0;
}