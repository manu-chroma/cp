#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	int a,b,c;
	cin >> a >> b >> c;
	bool not_possible = 1;

	for (int j = 0; j <= 9; j++)
	{
		int temp = a*10+j;	
		if(temp % b == 0) {
			not_possible = 0;
			a = temp;
			break;
		}
	}
	if(not_possible) {
		cout << -1 ;
		return 0;
	}

	cout << a;
	for (int i = 0; i < c-1; ++i)
	{
		cout << 0 ;
	}
	return 0;
}
