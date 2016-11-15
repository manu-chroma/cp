#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
typedef  double ld;

int a,b;

ld dis(int x, int y) {
	ld d = sqrt(pow(x-a,2)+pow(y-b,2));
	// cout << pow(d,2) << endl;
	return d;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);

	// int a,b;
	cin >> a >> b;
	int n;
	cin >> n;

	ld ans = 100000000000;

	while(n--) {
		int x,y,v;
		cin >> x >> y >> v;
		ld d = dis(x,y);
		ld time = d/v;
		if(time < ans)
			ans = time;
	}


	cout.precision(10);
	cout << ans ;
	return 0;
}