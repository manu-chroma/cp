#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n, days;
	cin >> n >> days;

	li ans ,m;
	ans = m = 0;
	bool check = 0;

	for (int i = 0; i < days; ++i)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); ++j)
		{
			if(s[j] == '0') {
				ans++;
				check = 1;
				break;
			}
		}

		if(check == 0) {
			if(m < ans) {
				m = ans;
			}
			ans = 0;
		}
		check = 0;

	}

	if(m > ans) 
		cout << m ;
	else cout << ans;

	int r = 0;


	return 0;


}
