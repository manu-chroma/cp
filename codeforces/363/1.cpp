#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f; //infinity
typedef long long int li;

int main(int argc, char const *argv[])
{
	li n;
	cin >> n;
	if(n== 1) 
		cout << -1 << "\n";
	else {
		string s;
		cin >> s;
		li index = -1;
		vector <li> a;
		for (int i = 0; i < n; ++i)
		{
			li temp;
			cin >> temp;
			a.push_back(temp);
		}

		li diff = INF ;
		for (li i = 0; i < s.size()-1; ++i)
		{
			if(s[i] == 'R' && s[i+1] == 'L') {
				index = i;
				if (a[index+1]-a[index] < diff )
					diff = a[index+1]-a[index];
			}
		}
		if(index == -1) {
			cout << -1 << "\n" ;
		}
		else {
			cout << diff/2 << "\n";
		}
	}
	return 0;
}