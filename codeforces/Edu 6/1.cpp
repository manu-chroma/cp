#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a1,b1,a2,b2;
    long long ans;
    cin >> a1 >> b1 >> a2 >> b2;
    long long diff = min(abs(a1-a2), abs(b1-b2));
    if(abs(a1-a2) != abs(b1-b2)) {
        diff += abs(abs(a1-a2) -abs(b1-b2));
    }


    cout << diff << endl;
}
