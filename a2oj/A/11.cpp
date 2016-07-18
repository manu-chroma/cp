#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int min, max, temp, iz, jz;
	cin >> temp;
	min = max = temp;
	iz = jz = 0;
	for (int i = 1; i < n; ++i)
	{
		cin>>temp;
		if(temp > max) {
			max = temp;
			jz = i;
		}
		if(temp <= min) {
			min = temp;
			iz = i;
		}
	}
	
	int ans = 0;
	ans += (jz-0) + (n-1-iz);
	
	if(iz < jz ) {
		ans--;
	}

	cout << ans;
	return 0;
}