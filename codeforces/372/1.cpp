#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n, c;
	cin >> n >> c;
	int t1, t2, ans = 0;
	cin >> t1;
	for (int i = 0; i < n; ++i)
	{
		cin >> t2;
		if(t2-t1 <= c)
			ans++;
		else 
			ans = 0;
		t1 = t2;
	}
	cout << ans << "\n";
	return 0;
}