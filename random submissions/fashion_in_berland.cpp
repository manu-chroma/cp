#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	li n;
	cin >> n;
	bool check = 0;
	for (int i = 0; i < n; ++i)
	{
		li temp;
		cin >> temp;
		if(temp == 0) {
			if(check) {
				cout << "NO" ;
				return 0;
			}
			check = 1;
		}
	}


	if( (check && n !=1) || (!check && n==1)) 
		cout << "YES" ;
	else 
		cout << "NO" ;
	return 0;
}