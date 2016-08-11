#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	li a;
	cin >> a;

	li ans = 0;
	int b[100000];
	for (int i = 0; i < a; ++i)
	{
		cin >> b[i];
	}

	for (int i = 0 ; i < a ; i++) {
		for (int j = i; j < a-1 ; j++) {
			ans += (b[i]* b[j]);
		}
	}

	cout << ans << "\n";
	return 0;

}