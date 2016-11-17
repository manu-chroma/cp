#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n, t, c; 
	// n: prisoners t: max crime level
	// c: c prisoners
	cin >> n >> t >> c;

	int seg, ans, temp;
	ans = seg = 0;
	for (int i = 0; i < n; ++i)
	{
		// cout << "seg: " << seg << endl;
		cin >> temp;
		if(temp > t) {
			if(seg >= c)
				ans += seg-c+1;
			seg = 0;
		}
		else {
			seg++;
		}
	}
	if(seg >= c)
		ans += seg-c+1;
	cout << ans << "\n";

	return 0;
}