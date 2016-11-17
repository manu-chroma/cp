#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	lli answer=0;
	int n, h;
	cin>>n>>h;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		if(temp > h) {
			answer += 2;
		}
		else {
			answer++;
		}
	}
	cout << answer ;
	return 0;
}
