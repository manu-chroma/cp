#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	li yo = 1;
	while(tc--) {
		li n;
		cin >> n;
		vector <li> a,b;
		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			a.push_back(temp);
		}

		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			b.push_back(temp);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		li ans = 0;
		for (int i = 0; i < n; ++i)
		{
			// cout << "value of b is " << b[n-i-1] << endl;
			ans += (a[i]*b[n-i-1]);
		}

		// if(n%2 != 0) ans += (a[n/2]*b[n/2]);
		cout << "Case #" << yo << ": " << ans << "\n";
		yo++;	
	}
	return 0;
}
