#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 
#define max 4005
int main() {
	ios_base::sync_with_stdio(false);

	int n;
	vector <string> store;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		string s;
		getline(cin, s);
		store.push_back(s);		
	}

	bool done = 0;

	for (int i = 0; i < n; ++i)
	{
		if(store[i][0] == 'O' && store[i][1] == 'O') {
			store[i][0] = store[i][1] = '+';
			done = 1;
			break;
		}

		else if(store[i][3] == 'O' && store[i][4] == 'O') {
			store[i][4] = store[i][3] = '+';
			done = 1;
			break;
		}
	}

	if(done) {
		cout << "YES \n" ;
		for (int i = 0; i < n; ++i)
		{
			cout << store[i] << "\n";
		}

	}
	
	else 
		cout << "NO \n";

	return 0;	
}