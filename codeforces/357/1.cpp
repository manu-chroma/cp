#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int n;
	cin>>n;
	int check = 0;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		int before, after;
		cin >> before >> after;
		
		if((after-before) > 0 && before >= 2400) {
			check = 1;
			cout << "YES" << "\n";
			return 0; 
		}
		// else
		// 	check = 0;  
	}

		
	cout << "NO" << "\n";

	return 0;
}
