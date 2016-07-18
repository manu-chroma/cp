#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

const int NO_X = 2e9;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	//cin.tie(0);

	priority_queue<int, vector<int>, greater<int> > min_heap;
	int n, tc;
	vector <pair<string, int> > all;
	string s;
	cin >> tc;
	while(tc--) {
		// cou t << "value of n is " << n << endl;
		cin >> s;
		// cout << s << endl;
		if(s == "insert") {
			cin >> n;
			min_heap.push(n);
			all.push_back(make_pair(s,n));
			// cout << s << " " << n << "\n";
		}

		else if(s == "getMin") {
			cin >> n;

			while( !min_heap.empty() && min_heap.top() < n) {

				all.push_back(make_pair("removeMin", NO_X));
				min_heap.pop();
			}
			// edit from here
			if(min_heap.empty() == 1 || min_heap.top() != n ) {
				min_heap.push(n);
				all.push_back(make_pair("insert",n)); 
			}
			
			all.push_back(make_pair(s,n));
		}

		else if(s == "removeMin") {
			if(min_heap.empty() == 1) {
				all.push_back(make_pair("insert",0));
			}
			else {
				min_heap.pop();
			}
			
			all.push_back(make_pair(s, NO_X));

		}
	} 	

	cout << all.size() << "\n";
	for (auto& i: all)
	{
		cout << i.first ;
		if(i.second != NO_X)
			cout << " " << i.second;
		cout << "\n";
	}

	return 0;
}
