#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li cells, des;
	cin >> cells >> des;

	vector <li> portals;
	portals.push_back(-1);
	for (int i = 0; i < cells-1; ++i)
	{
		li temp;
		cin >> temp;
		portals.push_back(temp);
	}

	li a = 1, i = 1;
	
	while(a <= des) {
		if(a == des) {
			cout << "YES" ;
			return 0;
		} 
		else { 
			a = a+portals[a]; 
		} 
	}

	cout << "NO" ;

	return 0;
}
