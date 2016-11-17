#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	// vector <int> test_256;

	int min_256 = min(c,d);
	min_256 = min(min_256, a);

	long ans = 0;
	ans += (min_256*256);
	a -= min_256;
	c -= min_256;
	d -= min_256;

	int min_32 = min(a, b);
	ans += (32*min_32);

	cout << ans << "\n";

	return 0;
}