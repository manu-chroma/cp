/*input
3 3 3
1 1 3
2 2 1
1 2 2
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

// int mat[5001][5001] = {0};

vector < pair<int, int> > row(5001), col(5001);
// first:time, second:color

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


	for (int i = 0; i < 5001; ++i)
	{
		row[i].first = row[i].second = 0;
		col[i].first = col[i].second = 0;
	}

	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= k; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a == 1) {
			// painting row
			row[b-1].first = i;
			row[b-1].second = c;
		}

		else if(a == 2) {
			// painting column
			col[b-1].first = i;
			col[b-1].second = c;
		}
	}

	// print
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(row[i].first > col[j].first) 
				cout << row[i].second << " ";

			else 
				cout << col[j].second << " ";
		}
		cout << "\n";
	}

	return 0;
}