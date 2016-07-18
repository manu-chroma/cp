#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int k,a,b, ans;
    cin >> k >> a >> b;
    if(a == b)
        cout << a/k << endl;
    else
        cout << abs(a-b)/k << endl;

}
