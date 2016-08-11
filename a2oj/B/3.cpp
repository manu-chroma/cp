#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

string convert_binary(int a,string s) {
{
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    s.push_back(n % 2);

}

li find_diff(int a, int b) {
	string s = convert_binary(a), r = convert_binary(b);
	li diff = 0;
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i] != b[i])
			diff++;
	}
	return diff;
}

// int diff[1001];
int main(int argc, char const *argv[])
{
	li n, m, k;
	// n types of soldier 
	// m+1 number of players
	// k : threshold for the difference
	cin >> n >> m >> k;

	for (int i = 0; i <= m; ++i) // m+1 times
	{
		// for (int j = 0; j < n; ++j) // 0 to n-1
		// {
		// 	// init with zero
		// 	diff[i][j] = 0;
		// }

		// int s;
		// cin >> s;
		// cout << s << endl ;
		cin >> diff[i];
	}

	// cout << "so" << endl;

	// for (int i = 0; i <= m; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		cout << diff[i][j];
	// 	}
	// 	cout << endl;
	// }

	li ans = 0;
	for (int j = 0; j < m; ++j)
	{
		li threshold = 0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(diff[m][i] != diff[j][i])
		// 		threshold++;	 
		// }
		// cout << "value of threshold is " << threshold << endl;
		// if(threshold <= k) ans++;

		li yo = find_diff(diff[i], diff[m]);
		if(yo <= k) ans++;
	}


	cout << ans ;
	return 0;
}