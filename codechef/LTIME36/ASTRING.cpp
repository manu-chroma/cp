#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int tc;
	cin>>tc;
	while(tc--) {
		string s;
		cin >> s;
		int k; 
		cin>>k;
		int del = s.length() - k;

		// sort the list
		for (int i=0, j=0; i < s.length()-1 && del > 0 ; ++i, ++j)
		{
			if(s[i+1] < s[i]) {
				s[i] = '.';
				del--;
				i = j = -1;
			}
		}
		// print the list
		for (int i = 0; k > 0; ++i)
		{
			if(s[i] != '.') {
				cout << s[i];
				k--;
			}
		}
		cout << "\n";
	}
	return 0;
}
