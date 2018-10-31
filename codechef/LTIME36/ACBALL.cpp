#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{	
	ios::sync_with_stdio(false);

	int tc;
	cin >> tc;

	while(tc--) {
		string a, b, c;
		cin >> a >> b;

		for (int i = 0; i < a.length() ; ++i)
		{

			if(a[i] == b[i] && b[i] == 'B') {
				cout << 'W';
			}

			else {
				cout << 'B';
			}

		}
		cout << "\n";
	}
	
	return 0;
}
