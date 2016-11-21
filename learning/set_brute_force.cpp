#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

vector< vector<int> > getAllSubsets(vector<int> set)
{
	vector< vector<int> > subset;
	vector<int> empty;
	subset.push_back( empty );

	for (int i = 0; i < set.size(); i++)
	{
		vector< vector<int> > subsetTemp = subset;

		for (int j = 0; j < subsetTemp.size(); j++)
			subsetTemp[j].push_back( set[i] );

		for (int j = 0; j < subsetTemp.size(); j++)
			subset.push_back( subsetTemp[j] );
	}
	return subset;
}

int main() {
	vector <int> a = {1,2,3};
	vector < vector <int> > subs = getAllSubsets(a);
	for (int i = 0; i < subs.size(); ++i)
	{
		for (int j = 0; j < subs[i].size(); ++j)
		{
			cout << subs[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}