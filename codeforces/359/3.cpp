#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

li ans = 0;

// void solve(string s1, string s2, bool b[], int yo1, int yo2) {
// 	cout << "value of yo is " << yo1 << " and yo2 " << yo2 << endl;
// 	// cout << "all len is " << s1.length()+s2.length() << endl; 
// 	if(yo1+yo2 >= (s1.length()+s2.length())) {
// 		cout << "yo i'm here" << endl;
// 		ans++;
// 		return;
// 	}
// 	else {
// 		if(yo1 <= s1.length()) {
// 			for (int i = 0; i <= (int) s1[yo1]-'0'; ++i)
// 			{
// 				cout << "value of i is " << i << endl;
// 				// cout << "in string 1" << endl;
// 				// cout << "value of i and b[i] " << i << " " << b[i] << endl;
// 				if(b[i] == 1) {
// 					b[i] = 0;
// 					yo1++;
// 					solve(s1,s2,b,yo1,yo2);
// 					b[i] = 1;
// 				}
// 			}	
// 		}
// 		else {
// 			for (int i = 0; i <= (int) s2[yo2]-'0'; ++i)
// 			{
// 				if(b[i] == 1) {
// 					b[i] = 0;
// 					yo2++;
// 					solve(s1,s2,b,yo1,yo2);
// 					b[i] = 1;
// 				}
// 			}
// 		}
// 	}
// }



string to_base(unsigned int n, unsigned int base)
{
	static const char alphabet[] = "0123456789ABCDEFGHI";
	string result;
	while(n) { result += alphabet[n % base]; n /= base; }
	return string(result.rbegin(), result.rend());
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n, m;
	cin >> n >> m;

	string s1 = to_base(n-1, 7), s2 = to_base(m-1, 7);

	// cout << "strings are  " << s1 << " " << s2 << endl;
	cout << "lenght of strings are " << s1.length() << " " << s2.length() << endl;;
	bool b[7] = {1,1,1,1,1,1,1};

	if(s1.length()+s2.length() > 7) 
		cout << 0 << endl;
	else {
		li ans = 0;
		for (int i = 0; i < m; ++i)
		{
			for (int i = 0; i < n; ++i)
			{
				bool b[7] = {1,1,1,1,1,1,1};				
				string s1 = to_base(n-1, 7), s2 = to_base(m-1, 7);
				for (int i = 0; i < s1.length(); ++i)
				{
					if(s1[i])
				}
			}
		}
	}
	// cout << s1 << " " << s2 << endl;
	// solve(s1,s2,b,0, 0);
	// cout << ans << endl;

	return 0;
}
