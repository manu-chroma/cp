#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int n = s.length();
	int a[26] = {0};
	for (int i = 0; i < n; ++i)
	{
		a[(int)(s[i]-'a')] += 1;
	}

	bool check = 0;

	for (int i = 0; i < 26; ++i)
	{
		if(a[i]%2 != 0) {
			if(check) {
				cout << "NO \n" ;
				return 0;
			}
			check = 1;
		}
	}
	cout << "YES \n" ;
}