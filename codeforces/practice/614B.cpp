#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int li;

int check_beautiful_extract (string temp) {
	bool one = 0;
	int zeros=0;

	// cout << temp << endl;
	for (int i = 0; i < temp.length(); ++i)
	{
		if(temp[i] == '1') {
			if(one == 0)
				one = 1;
			else 
				return -1;
		}
		else if(temp[i] == '0')
			zeros++;
		else 
			return -1;
	}
	// cout << zeros << endl;
	return zeros;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	li tc, zeros = 0;
	bool bad = 0;
	string temp, ans;
	cin >> tc;
	while(tc--) {
		cin >> temp;
		// cout << "yo " << temp << endl;
		if(temp == "0") {
			// cout << "temp is " << temp << endl;
			cout << 0;
			return 0;
		}

		int result = check_beautiful_extract(temp); 
		if(result == -1) {
			ans = temp;
			bad = 1;
		}	
		else {
			zeros += result;
		}
		
	}
	if(bad == 0)
		cout << 1;
	else 
		cout << ans;

	for (int i = 0; i < zeros; ++i)
	{
		cout << 0;
	}
	return 0;
}
