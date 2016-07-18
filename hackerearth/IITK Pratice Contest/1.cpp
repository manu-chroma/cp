#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n, m;
	cin >> n >> m;
	vector <li> people;
	for (int i = 0; i < n; ++i)
	{
		li temp;
		cin >> temp;
		people.push_back(temp);
	}
	li ans = 0;
	while(m--) {
		li l, r, x;
		cin >> l >> r >> x;
		li sum = 0;
		for (int i = l-1; i < r; ++i)
		{
			sum += people[i];
			if(sum >= x) {
				ans++;
				break;
			} 
		}
	}

	cout << ans << "\n" ;
	return 0;
}
