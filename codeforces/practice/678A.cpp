#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long double n, k, ans;
	cin >> n >> k;
	ans = ceil(n/k);
	if(ans*k == n)
		ans++;
	cout << (int)(ans*k);
	return 0;
}
