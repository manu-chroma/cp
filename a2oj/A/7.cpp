#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	string s, h = "hello";
	cin >> s;
	bool check = 1;
	for (int i = 0, j = 0; i < s.length() ; ++i)
	{
		
		if(h[j] == s[i]) {
			j++;
			if(j == h.length()) {
				cout << "YES";
				return 0;
			}

		}
		
	}
	cout << "NO";

	return 0;
}
