#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int tc;
	cin>>tc;
	while(tc--) {
		string s;
		cin>>s;
		if(s.length() <= 10) {
			cout << s << "\n";
		}
		else {
			cout << s[0] << s.length()-2 << s[s.length()-1] << "\n";
		}
	}
	return 0;
}
