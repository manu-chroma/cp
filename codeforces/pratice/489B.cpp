#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n,m;
	cin >> n;
	vector <li> boys,girls;
	for (int i = 0; i < n; ++i)
	{
		li temp;
		cin >> temp;
		boys.push_back(temp);
	}
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		li temp;
		cin >> temp;
		girls.push_back(temp);
	}

	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	li ans = 0;
	for (int i = 0, j = 0; i < n && j < m; )
	{
		if(abs(boys[i]-girls[j]) <= 1) {
			i++;
			j++;
			ans++;
		}
		else if(boys[i] > girls[j]) {
			j++;
		}
		else i++;
	}

	cout << ans ;
	return 0;
}
