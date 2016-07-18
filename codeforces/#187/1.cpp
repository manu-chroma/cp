#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int n, ans = 0;
	cin >> n;
	int a[100], b[100];
	for (int i = 0; i < n; ++i)
	{
		// int temp1, temp2;
		cin >> a[i] >> b[i];
		if(a[i] == b[i])
			ans++;
	}
	sort(a,a+n);
	sort(b,b+n);

	int i = 0, j = 0;
	for (; i < n && j < n; )
	{
		if(a[i] > b[j]) {
			ans++;
			i++;
		}
		else if(a[i] < a[j]) {
			j++;
		}
		else {
			i++;
			j++;
		}
	}
	ans += (n-i);

	cout << ans;
	return 0;
}
