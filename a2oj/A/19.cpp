#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[101] = {0};
	int p,q;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		int temp;
		cin >> temp;
		a[temp] = 1;	
	}
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		int temp;
		cin >> temp;
		a[temp] = 1;	
	}
	
	bool check = 1;
	for (int i = 1; i <= n; ++i)
		if(a[i] == 0) check = 0; 
	
	if(check) cout << "I become the guy." ;
	else cout << "Oh, my keyboard!" ;
	return 0;
}
