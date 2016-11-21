#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	li dp[50];
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 5;
	dp[3] = 11;

	for (int i = 3; i < 50; ++i)
	{
		dp[i] = 1*dp[i-1] + 4*dp[i-2] + 2*dp[i-3];	
	}

	int n;
	cin >> n;
	while(n--) {
		int temp;
		cin >> temp;
		cout << dp[temp] << "\n";
	}
	return 0;
}