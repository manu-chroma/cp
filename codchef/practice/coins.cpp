#include <bits/stdc++.h>
using namespace std;

typedef  long long int li; 

#define max 1000000000

// typedef unsigned long long int;

li solve(li a) {
	// cout << "value of a is " << a << endl;

	if(a == 0)
		return 0;

	 (solve(a/3)+solve(a/2)+solve(a/4));	
}

int main(int argc, char const *argv[])
{

	li a;
	cout << solve(0) << " " << solve(-100) << " " << solve(2) << " " << solve(12) << endl;

	// while(cin >> a) {
	// 	li ans = solve(a);
	// 	if(a > ans) 
	// 		cout << ans << "\n";
	// 	else 
	// 	 	cout << a << "\n";
	// }

	return 0;
}


