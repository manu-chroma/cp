#include <bits/stdc++.h>
using namespace std;

void swap(string * s, string * t) {
	string temp = *s;
	*s = *t;
	*t = temp;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;

	// cout << "string is " << s << endl;	// actual logic
	for (int j = 0 ; j < t; ++j)
	{
		for (int i = 0; i < n-1; )
		{
			if(s[i] == 'B' && s[i+1] == 'G') {
				swap(s[i], s[i+1]);
				i += 2;
			}

			else ++i;
			// else if(i == n-2) {
			// 	cout << s ;
			// 	return 0;
			// }
		}		
	}

	cout << s ;

	return 0;
}
