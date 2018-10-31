#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	while(tc--) {
		int n,k;
		cin>>n>>k;
		int ar[10000];
		for (int i = 0; i < n; i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
		//print array
		for (int i = 0; i < n; ++i)
		{
			cout<<ar[i]<<" ";
		}

		float ans=0;
		for (int i = k+1; i < n-k; i++)
		{
			ans += ar[i]; 
		}
		cout<<ans/(n-(2*k))<< endl;
	}
	return 0;
}
