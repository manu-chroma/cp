#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
li ans, r,c;


void start(int rain[][101], int x, int y, bool visited[][101]) {
	if(!visited[x][y] && x < r-1 && y < c-1 && x > 0 && y > 0 ) {
		visited[x][y] = 1;
		int min = rain[x+1][y+1];
		if(rain[x-1][y-1] < min)
			min = rain[x-1][y-1];
		if(rain[x][y-1])
			min = rain[x][y-1];
		if(rain[x-1][y])
			min = rain[x-1][y];
		if(min > rain[x][y]) {
			ans += min-rain[x][y];
			rain[x][y] = min;
		}
		cout << "value of x and y is " << x << " " << y << endl;
 		start(rain, x+1,y+1, visited);
		start(rain, x-1,y-1, visited);
		start(rain, x+1,y, visited);
		start(rain, x,y+1, visited);
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	for (int k = 0; k < tc; ++k)
	{
		cin >> r >> c;
		int rain[101][101];
		//taking input
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				cin >> rain[i][j];
			}
		}
		if(r <= 2 || c <= 2 ) {
			ans = 0; 
		}
		else {

		// find min off the edges 
			li min = 5000, x1,y1;
			for (int i = 1; i < c-1; ++i)
			{
				if(rain[0][i] < min) { 
					min = rain[0][i];
					x1 = 0 ;
					y1 = i;
				}
				if(rain[r-1][i] < min) {
					min = rain[r-1][i];
					x1 = r-1;
					y1 = i ;
				}
			}
			for (int i = 1; i < r-1; ++i)
			{
				if(rain[i][0] < min) { 
					min = rain[i][0];
					x1 = i ;
					y1 = 0;
				}
				if(rain[i][r-1] < min) {
					min = rain[i][r-1];
					x1 = i;
					y1 = r-1;
				}
			}
		// min of edges done

		// cout  << "min is " << min << " with co as " << x1 << " " << y1 << endl;

			bool visited[101][101];
			for (int r = 0; r < 101; ++r)
			{
				for (int s = 0; s < 101; ++s)
				{
					visited[r][s] = 0;
				}
			}
		//ready to call the funtion;
			ans = 0;
			start(rain, x1-1,y1-1, visited);
		// li ans = 0;
		}	
	
		cout << "Case #" << k << ": " << ans << "\n";
	}

	
	return 0;
}
