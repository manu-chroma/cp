// it was really bad to make string, rather use make pair

#include <bits/stdc++.h>
using namespace std;

typedef long long int li;



int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	//cin.tie(0);

	priority_queue<int, vector<int>, greater<int> > min_heap;
	int n, tc;
	vector <string> all;
	string s;
	cin >> tc;
	while(tc--) {
		// cou t << "value of n is " << n << endl;
		cin >> s;
		// cout << s << endl;
		if(s == "insert") {
			cin >> n;
			min_heap.push(n);
			all.push_back(s+" "+to_string(n));
			// cout << s << " " << n << "\n";
		}

		else if(s == "getMin") {
			cin >> n;

			while( !min_heap.empty() && min_heap.top() < n) {

				all.push_back("removeMin");
				min_heap.pop();
			}
			// edit from here
			if(min_heap.empty() == 1 || min_heap.top() != n ) {
				min_heap.push(n);
				all.push_back("insert "+to_string(n)); 
			}
			
			all.push_back(s+" "+to_string(n));
		}

		else if(s == "removeMin") {
			if(min_heap.empty() == 1) {
				all.push_back("insert 0");
			}
			else {
				min_heap.pop();
			}
			
			all.push_back(s);

		}
	} 	

	cout << all.size() << "\n";
	for (int i = 0; i < all.size(); ++i)
	{
		cout << all[i] << "\n";
	}

	return 0;
}
