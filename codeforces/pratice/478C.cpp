#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	li ans = a[0];
	a[1] -= a[0];
	a[2] -= a[0];
	if(a[1]+a[2] >= 3) {
		if(a[2] % 2 ==0)
			a[2] /= 2;
		else{ 
			a[2] /= 2; 
			a[2]++;
		}
		sort(a+1,a+3);
		
		ans += a[1];
	}
	cout << ans << "\n";
	return 0;
}
