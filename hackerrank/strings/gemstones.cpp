#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int gem[26] = {0};
	int rocks;
	string s;
	cin >> rocks;

	for (int i = 1; i < rocks; ++i)
	{
		cin >> s;
		int len = s.length(), index;

		for (int j = 1; j <= len; ++i)
		{
			index = (int)(s[j]-'a');
			if(gem[index] = i-1)
				gem[index] = i;
		}	
	}

	int ans = 0;

	for (int i = 0; i < 26; ++i)
	{
		if(gem[i] == rocks-1)
			ans++;
	}

	cout << ans << "\n";
}