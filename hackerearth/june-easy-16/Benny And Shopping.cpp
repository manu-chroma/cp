#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	// ios_base::sync_with_stdio(false); 

	li n;
	cin >> n;
	cin.ignore();
	while(n--) {
		string s;
		getline(cin, s);
		int i = 0;
		for (; i < s.size(); ++i)
		{
			if(s[i] == '$'){ 
				i++; 
				break;
			}
		}
		string ans = "";
		while(s[i] == ' ' || (s[i] >= '0' && s[i] <= '9') && i < s.size()) {
			
			if(s[i] >= '0' && s[i] <= '9') { 
				ans.push_back(s[i]);
			}
			i++; 
		}
		//remove 0's
		bool check = 1; 
		cout << "$" ;
		for (int i = 0; i < ans.size() - 1; ++i)
		{
			if(ans[i] == '0' && check) {
				
			}
			else { 
				cout << ans[i] ;
				check = 0;
			}
		}
		cout << ans[ans.size()-1] << endl;
		// << ans << endl;
	} 
	return 0;
}
