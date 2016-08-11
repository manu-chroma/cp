#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n, q;
	cin >> n >> q;

	vector < tuple<int, int, bool> > notif;

	int read_till = -1;

	for (int i = 0; i < q; ++i)
	{
		int a, b;
		cin >> a >> b;
		if(a == 1) {
			notif.push_back(make_tuple(b,a, 0));
		}

		else if(a == 2) {
			//reads notif of a given x application
			
		}

		else if(a == 3) {
			// reads notif till b
		}
	}

	return 0;
}