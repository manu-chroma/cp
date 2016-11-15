#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 
#define max 501

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	li ar [max][max];
	cin >> n;

	// row and col of 0
	int z = -1, y = -1;
	for (int i = 0; i < n; ++i)
	{		
		for (int j = 0; j < n; ++j)
		{
			cin >> ar[i][j];
			if(ar[i][j] == 0) {
				z = i;
				y = j;
			}
		}
	}

	int row = 0, col = 0;

	// handle edge cases

	row = (row != z) ? row : row++;
	col = (col != y) ? col : col++;

	li sum = 0, sum1 = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += ar[row][i];
	}

	for (int i = 0; i < n; ++i)
	{
		sum1 += ar[z][i];
	}	


	// sum2 for cross check
	for (int i = 0; i < n; ++i)
	{
		sum2 += ar[i][col]; 
	}

	if()

	cout << sum << " " << sum1 << " " << row << " " << z << endl; 

	cout << sum-sum1 << endl;
	return 0;
}