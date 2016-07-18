#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	while(tc--) {
		li n;
		cin >> n;

		string s;
		cin >> s;
		vector <li> ans;
		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			ans.push_back(temp);
		}
		// input complete
		vector <li> ones; // parse the index of 1's in the string
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i] == '1') {
				ones.push_back(ans[i]);
			}
		}

		li len = 0, previous = 0;
		// for (int i = 0; i < ones.size(); ++i)
		// {
		// 	if(i > 0 && ones[i-1]+1 == ones[i]) i++;
		// 	else {
		// 	len += ones[i] - previous;
		// 	previous = ones[i]+1;
		// 	} 
		// }

		// if(ones[ones.size()-1] < n-1) { // index of the last 1
		// 	len += ans[n-1] - ones[ones.size()-1];
		// }

		cout << len << "\n" ;
	}
	return 0;
}
