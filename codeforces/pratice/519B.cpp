#include <bits/stdc++.h>
using namespace std;

#define size 100000

int find_missing(int a[], int b[], int size_small) {
	for (int i = 0; i < size_small; ++i)
	{
		if(a[i] != b[i]) {
			return a[i];
		}
	}
	return a[size_small];
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int a[size], b[size], c[size];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a,a+n);

	for (int i = 0; i < n-1; ++i)
	{
		cin >> b[i];
	}
	sort(b,b+n-1);

	for (int i = 0; i < n-2; ++i)
	{
		cin >> c[i];
	}
	sort(c,c+n-2);


	cout << find_missing(a,b,n-1) << "\n" << find_missing(b,c,n-2);

	return 0;
}
