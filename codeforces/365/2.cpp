#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	int n, k;
	cin >> n >> k;
	li ans = 0;
	int b[100001];

	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}
	
	int cap[100001];
	unordered_map <int,bool> smart;

	for (int i = 0; i < k; ++i)
	{
		cin >> cap[i];
		smart[cap[i]] = 1; 
	}

	sort(cap[0],cap[k]);

	for (int i = 0; i < n-1; ++i)
	{	
		// cout << i%n << " " << (i+1)%n << endl;
		// if(!smart[i%n] && !smart[(i+1)%n]) {
			// cout << i << " " << i+1 << endl;
 			cout << "adding to ans " << b[i%n] << "" << b[(i+1)%n] << endl; 
 			ans += (b[i%n]*b[(i+1)%n]);
		// }
	}

	cout << "firs1 " << ans << "\n";

	for (int i = 0; i < k; ++i)
	{
		for (int j = cap[i]+1; j < n; ++j)
		{
			if(!smart[j]) {
			if(abs((j)-cap[i]) > 1 || cap[i] == n-1 && j == 0 ) {
				// cout << "adding to ans " << b[cap[i]] << " " << b[j%n] << endl;
				ans += (b[cap[i]]*b[j%n]);
				}
			// }
			}
		}
	}

	cout << "first" << ans << "\n";
	// for (int i = 0; i < k-1; ++i)
	// {
	// 	for (int j = 0; j < k; ++j)
	// 	{
	// 		if(abs(cap[i]-cap[j]) > 1 )
	// 		ans += (b[cap[i]]*b[cap[j]]);
	// 	}
	// }

	cout << ans << "\n";
	return 0;
}