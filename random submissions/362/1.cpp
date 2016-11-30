#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);

	li t,s,x;
	cin >> t >> s >> x;
	if(x < t) 
		cout << "NO";
	else if(x == t) 
		cout << "YES";
	else if((x-t)%s == 0 || ((x-t-1)%s == 0 && x-t-1 != 0)) 
		cout << "YES" ; 
	else 
		cout << "NO" ;
	return 0;
}