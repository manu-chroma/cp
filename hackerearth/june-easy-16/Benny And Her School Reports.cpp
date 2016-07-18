#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	while(tc--) {
		li n, m, x, ans = 0;
		cin >> n >> m >> x;
		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			ans += temp;
		}

		ans = x*(n+1) - ans;
		if(ans < 0) cout << 1 << "\n" ;
		else if(ans <= m) cout << ans << "\n";
		else cout << "Impossible" << "\n" ;
	}
	return 0;
}
