#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	while(tc--) {
		li villages;
		cin >> villages;

		string s;
		cin >> s;
		vector <li> indices;
		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			indices.push_back(temp);
		}

		li one_first = (s[i] == '1') ? 1 : 0;
		li index_of_0, index_of_1, ans = 0;
		index_of_1 = index_of_0 = -1;
		for (int i = 0; i < s.length(); )
		{
			if(s[i] == '0') {
				index_of_0 = i;
				while(s[i] != '1' && i < s.length()) i++;
				ans = 
			}
		}

	}
	return 0;
}
