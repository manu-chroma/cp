#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main()
{
	ios_base::sync_with_stdio(false);
	
	li n,k;
	cin >> n >> k;
	cout << n+(k-n%k) << "\n";
	return 0;
}
