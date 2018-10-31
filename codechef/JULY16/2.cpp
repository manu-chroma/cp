#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	int tc;
	cin >> tc;
	while(tc--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		vector <li> ans;
		// actual indexes of the tower
		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			ans.push_back(temp);
		}

		vector <li> ones; // parse the index of 1's in the string
		for (int i = 0; i < n; ++i)
		{
			if(s[i] == '1') {
				ones.push_back((int)s[i]-'0');
			}
		}

		li a = 0;
		if(ones.empty()) {
			a += ans[n-1] - ans[0]; // correct till here
			cout << a << "\n";
		}
		else {
			if(ones.size() > 1) {
				for (int i = 0; i < ones.size()-1;)
				{
					if(ans[ones[i+1]] - ans[ones[i]] == 1) {
						i++;
					}
					else {
						a += (ans[ones[i+1]] - ans[ones[i]]-1);
						i++; 
					}
				}
			}
			a += ((ans[ones[0]]-ans[0])+ (ans[n-1]-ans[ones[ones.size()-1]]));
			cout << a << "\n";
		}
		
	}
	return 0;
}