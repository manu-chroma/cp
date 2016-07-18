#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n;
	cin >> n;
	while(n--) {
		li n;
		cin >> n;
		if(n == 1) {
			cout << "NO" << "\n";
		}
		else {
			li ans = 0;
			for (int i = 1; i <= sqrt(n); ++i)
			{
				if(n%i == 0) ans += (i+(n/i));
				
			}

			if(ans == n*2)
				cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}
	return 0;
}
