#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	int i = 1;
	while(1) {
		int n;
		cin >> n;
		if(n == 0) 
			return 0;
		else {
			cout << "Case " << i << ": " << (n/2) << "\n";
			i++; 
		}
	}
	return 0;
}