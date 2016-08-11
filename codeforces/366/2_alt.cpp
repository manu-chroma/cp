#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int last = 2;

	while(n--) {
		li yo;
		cin >> yo;
		if((last == 2 && yo%2 == 0) || (last == 1 && yo%2 != 0)) { 
			cout << 1 << "\n";
			if(yo != 1)
				last = 1;
		}

		else {
			cout << 2 << "\n";
			if(yo != 1)
				last = 2;
		}

	}
}