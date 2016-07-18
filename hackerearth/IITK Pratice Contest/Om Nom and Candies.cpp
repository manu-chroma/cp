#include <bits/stdc++.h>
using namespace std;

#define num 100001

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n;
	cin >> n;
	li candies[num];
	for (int i = 1; i <= n; ++i) cin >> candies[num];

	li a[num] = {0} ;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			if(i%j == 0 && a[j] >= a[i])
				a[i] = a[j]+candies[j];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << " " << "\n";
	}

	return 0;
}
