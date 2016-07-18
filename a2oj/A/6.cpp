#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	int n, sum = 0, a[100];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum += a[i];
	}

	sort(a,a+n);
	int sub = 0, coins = 0;

	while(sub <= sum) {
		sub += a[n-1];
		sum -=a[n-1];
		n--;
		coins++;
	}
	
	cout << coins;
	
	return 0;
}
