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
	//int a[size], b[size], c[size];
	int n;
	cin >> n;

	long long int a, b, c, temp;
	a = b = c = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		a += temp;
	}
	
	for (int i = 0; i < n-1; ++i)
	{
		cin >> temp;
		b += temp;
	}

	for (int i = 0; i < n-2; ++i)
	{
		cin >> temp;
		c += temp;
	}


	cout << a-b << "\n" << b-c;

	return 0;
}
