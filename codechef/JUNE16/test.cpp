#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define size 1000001

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	lli n, m;
	cin >> m >> n;
	lli ans = 0;

	if(m > n) {
		int temp = m;
		m = n;
		n = temp;
	}

	for (int i = 1; i <= m; ++i)
	{
		lli resi = (5-(i%5)); // resi 4
		if(i%5 == 0) {
			ans += n/5;
			//ans++;
		}
		else {
			ans += ((n-resi)/5);
			if(i+n >= 5)
				ans++;
		}
		
	}

	cout << ans << "\n";
	return 0;
}