#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
// bool cmp(const Size& lhs, const Size& rhs)
// {
//   return lhs.width < rhs.width;
// }

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n;
	cin >> n;
	map <li,li> s;
	for (auto i = 0; i < n; ++i)
	{
		li temp;
		cin >> temp;
		if(s.find(temp) == s.end()) {
			s[temp] = 1;
		}
		else s[temp]++;
	}

	// int max = -1, value = -1;
	// auto max = max_element(s.begin(), s.end());
	// cout << max.first << endl;
	// s.erase(1);
	// for(auto i: s) {
	// 	if(max < i.second) {
	// 		max = i.second;
	// 		value = i.first;
	// 	}
	// }

	auto x = std::max_element(s.begin(), s.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });
	cout << *max.first << endl;
	// cout << max.first << " has the max frequency of " << max.last << endl;
	return 0;
}
