#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

#define max 51
// formula used : 

int f(int i, int j, int n) {
	return n*(((i+j-1+(n/2))%n) + (i+2*j-2)%n) + 1;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	int ar[max][max];
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << f(i, j, n) << " "; 
		}
		cout << "\n" ;
	}

	return 0;
}