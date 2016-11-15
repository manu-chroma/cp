/*input
5 3 5
1 1 1
1 3 1
1 5 1
2 1 1
2 3 1
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int mat[5001][5001] = {0};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 0; i < k; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a == 1) {
			// painting row
			for (int i = 0; i < m; ++i)
			{
				mat[b-1][i] = c;
			}
		}

		else if(a == 2) {
			// painting column
			for (int i = 0; i < n; ++i)
			{
				mat[i][b-1] = c;
			}

		}
	}

	// print
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}