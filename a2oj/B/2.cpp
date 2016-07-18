#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	long long int n, tasks;
	cin >> n >> tasks;
	long long int ans = 0, init = 1;
	
	while(tasks--) {
		long long int temp;
		cin >> temp;

		if(temp-init < 0) {
			ans += ((n+(temp-init))%n);
		}
		else ans += ((temp-init)%n);
		init = temp;
	}
	
	cout << ans;
	return 0;
}
