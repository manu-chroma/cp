#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	string s;

	vector <int> e;

	// took energies
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		e.push_back(temp);
	}

	
	string a,b;
	cin >> a;

	for (int i = 0; i < n-1; ++i)
	{
		cin >> b;
		if(a.length() < b.length()) { // move forward
			a = b;
		}

		else if(a.length() > b.length()) {
			cout << -1 << "\n"; 
			return 0;
		}

		else if(a.length() == b.length()) {
			if(a[0] > b[0] || a[a.length()-1] > b[0] || a[0] > b[b.length()-1] || a[a.length()-1] > b[b.length()-1]) {
				cout << -1 << "\n";
				return 0;
			}

			
		}
	}

	if(n%2 != 0) {

	}
}