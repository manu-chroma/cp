#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n, k;
	cin >> n >> k;
	li ans = k - k%n;
	if(k%n <= n/2) { //case of odd
		ans += (2*(k%n-1)+1);
	}
	else {
		
	}
	return 0;
}
