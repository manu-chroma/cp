#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	string s, ans="";
	cin >> s;

	for (int i = 0; i < s.length(); )
	{
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' ) {
			if(ans.empty() != 1 && ans.back() != ' ')
				ans += " ";
			i += 3;
		}
		else {
			ans.push_back(s[i]);
			++i;
		}
	}
	cout << ans ;
	return 0;
}
