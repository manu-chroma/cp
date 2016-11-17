#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	lli a = 1234567,b = 123456 ,c= 1234;

	lli n;
	cin >> n;
	lli gcd1 = __gcd(a,b), gcd2 = __gcd(a,c), gcd3 = __gcd(b,c);
	lli gcd = __gcd(gcd1,c);

	cout << n%gcd << n%gcd1  << n%gcd2  << n%gcd3  << endl;
	// if(n% gcd1 == 0 || n%gcd2 == 0 || n%gcd3 == 0 )
	// 	cout << "YES" << "\n";
	// else 
	// 	cout << "NO" << "\n";


	return 0;
}