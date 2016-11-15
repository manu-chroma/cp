#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	bool check[26] = {0};
	string s;
	cin >> s;

	// less than 26
	if(s.length()  < 26) {
		cout << -1 << "\n";
		return 0;
	}
	

	for (int i = 0; i < s-25; )
	{
		for (int j = 0; j < 26; ++j)
		{
			if(check[s[j]-'A'] == 0)
				check[s[j]-'A'] = 1;
			else {
				i = i+j;
				check[26] = {0};
			}
		}
	}
	return 0;
}