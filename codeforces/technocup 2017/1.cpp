#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int a, b;
	int steps = 1;
	cin >> a >> b;
	vector<int> store;
	store.push_back(b);
	while(a < b) {
		if(b%10 == 1)   
			b = b/10;
		else if(b%2 == 0) {
			b /= 2;
		}
		else {
			cout << "NO\n" ;
			return 0; 
		}
		store.push_back(b);
		steps++;
	}
	if(a != b) {
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	sort(store.begin(), store.end());

	cout << steps << "\n";
	for (int i = 0; i < store.size(); ++i)
	{
		cout << store[i] << " ";
	}
	cout << "\n";
	return 0;
}