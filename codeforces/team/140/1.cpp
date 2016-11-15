#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	unordered_map <int, int> yo;
	for (int i = 1; i <= n; ++i)
	{
		int temp;
		cin >> temp;
		yo[temp] = i;
	}

	int m;
	cin >> m;
	li a1, a2;
	a1 = a2 = 0;

	for (int i = 0; i < m; ++i)
	{
		int temp;
		cin >> temp;
		a1 += yo[temp];
		a2 += n-yo[temp]+1;
	}

	cout << a1 << " " << a2 << "\n"; 
	return 0;
}