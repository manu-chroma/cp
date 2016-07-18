#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n, m, temp;
	cin >> n >> m;
	int a[51];
	for (int i = 0; i < m; ++i)
	{
		cin >> a[i];
	}

	sort(a,a+m);
	int ans = a[n-1] - a[0];
	for (int i = 1; i <= m-n; ++i)
	{
		ans = a[i+n-1] - a[i] < ans ? a[i+n-1] - a[i] : ans;
	}
	cout << ans;
	return 0;
}
