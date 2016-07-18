//237171123124584251 923523399718980912 7150
#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long int l, r, k;
	cin >> l >> r >> k;
    if(r == l && l== k) { // both equal  	
        cout << k << endl;
        return 0;
    }
    if(k > r && l != 1) {
        cout << -1 << endl;
        return 0;
    }
    bool check = 0;
	unsigned long long int num = 1;
	int counter;
	while(num > r) {
        num /= k;
        couter++;

	}
	while(num > l ) {
        cout << num << " ";
        num  *= k;
        check = 1;
	}
	if (!check) {
        cout << -1 << endl;
	}

return 0;