#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ul; 

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);

	ul l, r, k, num = 1;
	cin >> l >> r >> k;

	if(r == l && l== k) {
		cout << k << "\n";
		return 0;
	}

	if(k > r && l != 1) {
		cout << -1 << "\n";
		return 0;
	}

	bool check = 1;
	while(num <= r) {
		// cout << "value of num is " << num << endl;
		if(num >= l) {
			cout << num << " ";
			check = 0;
		}
		
		if(10e18/k < num) { //checking for overflow before multiplying
			// cout << "yo" << endl;
			if(check) cout << -1;
			return 0;
		}
		
		num *= k;
		
	}
	if(check)
		cout << -1 ;
	return 0;
}
