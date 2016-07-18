#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc; 
	cin>>tc;
	while(tc--) {
		long long int r,g,b;
		cin>>r>>g>>b;
		long long int k;
		cin>>k;
		long long int ans=0;
		//pigeon hole principle
		ans += (min(k-1,r)+min(k-1,g)+min(k-1,b));
		cout << ans+1 << endl;
		
	}
	return 0;
}