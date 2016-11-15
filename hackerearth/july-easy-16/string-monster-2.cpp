#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while(tc--) {
		int n;
		cin >> n;
		cin.ignore();

		vector <string> in;

		for (int i = 0; i < n; ++i)
		{
			string s;
			cin >> s;
			in.push_back(s);
		}
		string final;
		cin >> final;
		
		unordered_map <char, bool> ans;
		for (int i = 0; i < final.length(); ++i)
		{
			ans[final[i]] = 0;
		} 

		for (int i = 0; i < in.size(); ++i)
		{
			// check if string is valid
			for (int j = 0; j < in[i].size(); ++j)
			{
				if(ans[in[i][j]])
					ans[in[i][j]] = 1;
			}
		}

	}
}