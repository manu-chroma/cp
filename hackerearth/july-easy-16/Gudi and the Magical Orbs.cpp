#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
int ans = 0;
int n, m;

void solve(int a[101][101], int x, int y, int k, int max) {
	 
	max += a[x][y];
	if(x > n || y > m || max > k) return;

	if(x == n && y == m && max > ans && max <= k) {
		ans = max; 
	}
	solve(a, x+1, y, k, max);
	solve(a, x, y+1, k, max);
	solve(a, x+1, y+1, k, max);
} 

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int tc;
	cin >> tc;
	while(tc--) {
		ans = 0;
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
		
		solve(a, 1, 1, k, 0);
		
		if(ans != 0) cout << ans << "\n" ;
		else cout << -1 << "\n" ;
	}

	return 0;
}
