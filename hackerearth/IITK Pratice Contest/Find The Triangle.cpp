#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	while(tc--) {
		li n;
		cin >> n;
		li a[100000];
		for (int i = 0; i < n; ++i) cin >> a[i] ;
		sort(a,a+n);

		bool x = 1;

		for (int j = n-2; j > 0; j--)
		{
			if(a[j-1] + a[j] > a[j+1]) {
				cout << a[j-1] << " " << a[j] << " " << a[j+1] << "\n";
				x = 0;
				break;
			}
		}

		if(x == 1)
			cout << -1 << "\n";
	}
	return 0;
}
