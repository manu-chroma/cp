#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int a[501];

int main() {
	ios_base::sync_with_stdio(false);

	int days, k;
	cin >> days >> k;
	for (int i = 1; i <= days; ++i)
	{
		cin >> a[i];
	}

	if(days == 1) {
		cout << 0 << "\n";
		cout << a[1] << "\n";
		return 0;
	}

	li grand = 0 ;
	// exclude the last day 
	int sum_of_two = 0;
	for (int i = 1; i < days; ++i)
	{
		sum_of_two = a[i] + a[i+1];
		int diff = k - sum_of_two;
		if(diff > 0) {
			a[i+1] += diff;
			grand += diff;
		} 
	}

	cout << grand << "\n";
	for (int i = 1; i <= days; ++i)
	{
		cout << a[i] << " " ;
	}
	cout << "\n";
	return 0;
}