#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int a[100006];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int ans = 1, temp = 1;
	for (int i = 0; i < n-1; ++i)
	{
		if(a[i+1] > a[i]) temp++;
		else {
			if(ans < temp)
				ans = temp;
			temp = 1;
		}
	}

	ans = (ans < temp) ? temp : ans;
	
	cout << ans << "\n";
}