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
		long double ans = 0;
		bool check_4 = 0, fail = 0;

		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			if(temp == 5) 
				check_4 = 1;
			if(temp == 2) 
				fail = 1;
			ans += temp;
		}
		
		if((ans/n) >= 4.0 && check_4 && !fail) 
			cout << "Yes" << "\n";
		else 
			cout << "No" << "\n";

	}
	return 0;
}
