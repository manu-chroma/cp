#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int a[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> a[i]; 
	}

	sort(a,a+3);
	cout << abs(a[1]-a[0])+abs(a[1]-a[2]) << "\n"; 
	return 0;
}