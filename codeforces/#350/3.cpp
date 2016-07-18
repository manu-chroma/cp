#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	li n;
	cin >> n;
	map <li,li> sci;
	for (int i = 0; i < n; ++i)
	{	
		li temp;
		cin >> temp;
		if(sci.find(temp) == sci.end())
			sci[temp] = 1;
		else sci[temp]++;
	}

	li m;
	cin >> m;
	vector <pair<li,li> > movie;
	for (int i = 0; i < m; ++i)
	{
		li t1;
		cin >> t1;
		movie[i].first = t1;
	}
	
	for (int i = 0; i < m; ++i)
	{
		li t1;
		cin >> t1;
		movie[i].second = t1;
	}
	vector <li> index;
	vector< pair<li, li> >::iterator result;
	result = max_element(movie.begin(), movie.end());
	li max = movie[result];
	for (int i = 0; i < m; ++i)
	{
		if(movie[i].first == max)
			index.push_back(i);
	}

	li ans = sci[movie[index[0]].first];
	li second = movie[index[0]].second;
	for (int i = 0; i < index.size(); ++i)
	{
		if(movie[index[i]].second > second) {
			ans = sci[movie[index[i]].first];
			second = movie[index[i]].second;
		}
	}
	
	cout << ans;

	return 0;
}
