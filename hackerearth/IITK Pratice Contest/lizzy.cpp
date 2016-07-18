#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

bool check(string s, li l, li r) {
	if(l == r)
		return 1;
	while(l < r) {
		if(s[l] != s[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);

	li len, q;
	cin >> len >> q;
	string s;
	cin >> s;
	while(q--) {
		li type;
		cin >> type;
		if(type == 0) {
			li index;
			cin >> index;
			char a;
			cin >> a;
			s[index-1] = a; 
		}
		else {
			li l,r;
			cin >> l >> r;
			if(check(s,l-1,r-1)) cout << "Yes" << "\n" ;
			else cout << "No" << "\n" ;
		}
	}
	return 0;
}
