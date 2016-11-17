#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	map <char,int> w1, w2;
	w1['q'] = 9, w1['r'] = 5, w1['b'] = 3, w1['n'] = 3, w1['p'] = 1, w1['k'] = 0;
	w2['Q'] = 9, w2['R'] = 5, w2['B'] = 3, w2['N'] = 3, w2['P'] = 1, w2['K'] = 0;
	
	int ans1, ans2;
	ans1 = ans2 = 0;
	char temp;
	for (int i = 0; i < 8; ++i)
	{
		for (int i = 0; i < 8; ++i)
		{
			cin >> temp;
			if(temp != '.') {
				if(w1.find(temp) != w1.end())
					ans1 += w1[temp];
				else 
					ans2 += w2[temp];  
			}
		}
	}
	
	if(ans1 > ans2)
		cout << "Black" ;
	else if (ans1 == ans2)
		cout << "Draw" ;
	else 
		cout << "White" ;
	return 0;
}
