#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);

	long long int tc, num, k, answer=0;
	cin >> tc >> k;
	while(tc--) {
		cin >> num;
		if(num%k == 0)
			answer++;
	}
	cout << answer ;
	return 0;
}
