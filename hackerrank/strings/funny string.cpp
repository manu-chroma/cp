#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	// cin.ignore();
	while(tc--) {
		bool done = 0;
		string s;
		cin >> s;

		int len = s.length();
		for (int i = 0; i < len/2; ++i)
		{	
			if((int)(s[i+1]-s[i]) != (int)(s[len-1-i]-s[len-2-i])) {
				cout << "Funny \n";
				done = 1;  
			}
		}
		if(!done)
			cout << "Not Funny \n"; 
	}

}