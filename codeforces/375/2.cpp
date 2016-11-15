#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	string s;
	cin >> s;
	bool open = 0;
	int out, in;
	out = in = 0;

	//finding first parenthesis
	int first = -1;
	for (int i = 0; i < n; ++i)
	{
		if(s[i] == '_') {
			first = i;
			break;
		}
	}


	for (int i = 0; i < count; ++i)
	{
		if(s[i] == '(') {
			open = 1;
		}

		if(s[i] == ')') {
			open = 0;
		}

		if(s[i] == '_' && before = 1) {

		}
	}
	return 0;
}