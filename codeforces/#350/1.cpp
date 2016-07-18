#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	long long int n, min, max;
	cin >> n;

	// cout << n/7 << endl;
	min = n/7;
	min *= 2;
	n = n%7;
	if(n>=2) {
		max = 2+min;
	}
	else max = n+min;
	if(n == 6)
		min++;
	cout << min << " " << max << endl;
	return 0;
}
