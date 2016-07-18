#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int ans = a + b + c;
	ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);

	cout << ans ;
	return 0;
}
