#include <bits/stdc++.h>
#include <bitset>

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
		vector <int> a;
		li ans = 0, temp;
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				// string binary = std::bitset<8>(128).to_string(); 
				temp = i^j;
				// cout << "i and j are " << i << " " << j << " " << temp << endl;
				if(temp <= n && i != j) ans++;

				}
			}

			cout << ans/2 << endl;
		}
		return 0;
	}
