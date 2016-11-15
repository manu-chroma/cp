#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int a[100001];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a, a+n);
	int yo = (a[0]-a[n-1]) ;
	int sum = a[0] + a[n-1];
	for (int i = 1; i < n/2; ++i)
	{
		if((a[i]-a[n-i-1])  != yo || (sum == a[i]*2 && sum = a[]) ) {
			perror ("done");
			cout << "NO \n" ;
			return 0;
		}

	}

	if(n == 1) {
		cout << "YES \n";
	}
	else if(n%2 == 0 || (2*a[n/2] == a[0]+a[n-1]))
		cout << "YES \n";
	else 
		cout << "NO \n";
	return 0;
}