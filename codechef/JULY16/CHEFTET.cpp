#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	while(tc--) {
		li n, temp;
		cin >> n;
		vector <li> a,b;
		for (int i = 0; i < a; ++i)
		{
			cin >> temp;
			a.push_back(temp);
		}

		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			b.push_back(temp);
		}

		li max = -1, index = -1;
		for (int i = 0; i < n; ++i)
		{
			if(a[i] > max) { 
				max = a[i];
				index = i;
			}
		}
		li ans = max, ans1 = max+b[i];
		bool
		for (int i = 0; i < n; ++i)
		{
			/* code */
		}

	}
	return 0;
}
