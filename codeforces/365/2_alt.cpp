#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	li ans = 0;
	int b[100001];

	// take beauty input
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}

	int cap[100001];
	bool smart[100001];
	
	// take capital input
	for (int i = 0; i < k; ++i)
	{
		// cout << 
		cin >> cap[i];
		cap[i]--;
		smart[cap[i]] = 1; 
	}
	
	li ams = 0;	
	// all neighbours added
	for (int i = 0; i < n-1; ++i)
	{	
		if(!smart[i] && smart[i+1]) {
			ams += b[i]+b[i+1];
			ans += (b[i]*b[i+1]);
		}
	}

	// unordered_map <int,bool> done;
	li ans1 = 0, add = 0;
	bool done[100001] = {0};


	for (int i = 0; i < k; ++i)
	{
		add += b[cap[i]];
	}

	ans1 += (sqrt(cap[i]));
	ans1 += (add*ams);
	// for (int i = 0; i < k; ++i)
	// {
	// 	done[cap[i]] = 1;

	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		if(!done[j]) {
	// 			if(abs(j-cap[i]) > 1) {
	// 				ans1 += (b[j]*b[cap[i]]);
	// 			}
	// 		}
	// 	}
	// }

	ans += ans1;


	// if(!done[n-1] && !done[0])
	// 	ans += b[n-1]*b[0];

	cout << ans << "\n";

	return 0;
}