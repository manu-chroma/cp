#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{	long long int d, ans =0;
	scanf("%llu",&d);
	int ar[] = {5,4,3,2,1};
	for (int i = 0; i < 5; i++) 
	{	if(d) {
		ans += d/ar[i];
		d = d%ar[i];
		}
	}
	printf("%llu \n", ans );
	return 0;
}
