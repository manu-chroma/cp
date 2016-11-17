#include <bits/stdc++.h>
using namespace std;

typedef long long int li;



void try_to_solve(li a[], li n) {
	bool check = 1;
	while(check) {
		check = 0;
		for (int i = 1; i < n; ++i)
		{
			if(a[i] > a[i+1]) {
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				cout << i << " " << i+1 << "\n";
				check = 1;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li a[101];
	li n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	try_to_solve(a, n);
	return 0;
}
