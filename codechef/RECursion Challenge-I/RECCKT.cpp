#include <bits/stdc++.h>
using namespace std;

//long long int a[1000000000];


int solve_rec(long long int n) {
		// for (int i = 0; i < n; ++i)
		// {
		// 	cin>>a[i];
		// }

		//cout << solve_rec(n) << endl;	
}

int solve_iter(long long int n) {
	long long int max,min;

	long long int temp;
	cin >> temp;
	max = min = temp;
	
	for (int i = 1; i < n; i++)
		{	
			cin>>temp;
			if(temp > max)
				max = temp;
			if(temp < min)
				min = temp;
		}

		return (max-min);
	}

		int main(int argc, char const *argv[])
		{
			int tc;
			cin>>tc;
			while(tc--) {
				long long int n;
				cin>>n;
				cout << solve_iter(n) << endl;
			}
			return 0;
		}
