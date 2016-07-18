#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int a[101] = {0}, b[101] = {0};
	int n, temp;
	cin >> n;
	for (int i = 0; i < n ; ++i)
	{	
		cin >> temp;
		a[temp]++;
		cin >> temp;
		b[temp]++;
	}

	int ans=0;
	for (int i = 0; i < 101; i++)
	{
		if(a[i] !=0 && b[i] != 0)
			ans += (a[i]*b[i]);
	}
	cout << ans;
	return 0;
}
