#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
int n,m;
int check_max(int a[101][101], int i, int j) {
	int max = 10000000;
	if(i-1 > 0 && j-1 > 0 ) //&& a[i-1][j-1] < max) 
	max = a[i-1][j-1];
	if(i-1 > 0 && a[i-1][j] < max) max = a[i-1][j];
	if(j-1 > 0 && a[i][j-1] < max) max = a[i][j-1];

	return max;  
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	int tc;
	cin >> tc;
	while(tc--) {
		// li ans = 0;
		int a[101][101];
		int k;
		cin >> n >> m >> k;
		
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				cin >> a[i][j];
			}
		}
		
		//dp solution || row wise filler
		int ans[101][101];
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				ans[i][j] = 0;
				int max = check_max(a, i, j);
				// if(max+a[i][j] <= k)
				ans[i][j] = (max+a[i][j]);
			}
		}

		
		
		if(ans[n][m] != 0 && ans[n][m] <= k) cout << ans[n][m] << endl;
		else cout << -1 << endl;
	}

	return 0;
}

