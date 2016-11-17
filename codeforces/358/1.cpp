#include <bits/stdc++.h>
using namespace std;

typedef long long li;

int main(int argc, char const *argv[])
{
	li m, n;
	cin >> n >> m;
	li mod[5] = {0}, mod1[5] = {0};
	for (li i = 1; i <= m; ++i)	mod[i%5]++;
	for (li i = 1; i <= n; ++i) mod1[i%5]++;
	
	li ans = 0;
	ans += (mod[0]*mod1[0]);
	for (li i = 1; i < 5; ++i)
	{
		ans += (mod[i]*mod1[5-i]);
	}

	cout << ans;
	return 0;
}
