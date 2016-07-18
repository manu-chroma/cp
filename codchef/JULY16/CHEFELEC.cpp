#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

li find(string s, int begin, int end) {
	int temp = -1,temp1 = -1;
	for (int i = 0; i < begin; ++i)
	{
		if(s[i] == '1') 
			temp = i;
	}
	for (int i = end+1; i < s.size(); ++i)
	{
		if(s[i] == '1') {
			temp1 = i;
			break;
		}
	}

	// return min(temp,temp1);
	if(temp == -1) 
		return temp1;
	else if(temp1 == -1)
		return temp;
	else {
		if(begin - temp < temp1-end) 
			return temp;
		else 
			return temp1;
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	while(tc--) {
		li min, max, n;
		cin >> n;
		string s;
		cin >> s;

		li begin, end;
		begin = end = -1;
		bool first = 1, between = 0;
		// cout << s << endl;
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i] == '0' && first) {
				first = 0;
				begin = i;
			} 
			else if(s[i] == '0') {
				end = i;
			}
			if(s[i] == '1' && !first && end != -1) { //check between
				between = 1;
			}
		}
		
		vector <li> ans;
		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			ans.push_back(temp);
		}

		// cout << "yo " << begin << " " << end << endl;
		if(begin == -1) 
			cout << 0 << "\n"; // all one
		else if(end == -1) { 
			cout << 1 << "\n";
		}
		else if(between) 
			cout << ans[end]-ans[begin] << "\n" ;
		else {
			int a = find(s, begin, end);
			if(a < min) 
				cout << ans[end] - ans[a] << "\n" ;
			else 
				cout << ans[a]-ans[begin] << "\n";
		}
	}

	return 0;
}
