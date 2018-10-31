#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	lli n, q;
	cin >> n >> q;

	lli min, max, temp;
	cin >> temp;
	min = max = temp;

	for (int i = 0; i < n-1; ++i)
	{
		cin >> temp;
		if(temp > max)
			max = temp;
		if(temp < min) 
			min = temp;
	}

	while(q--) {
		
		lli query;
		cin >> query;
		if(query < min || query > max) 
			cout << "No" << "\n";
		else 
			cout << "Yes" << "\n";
	}
	return 0;
}
