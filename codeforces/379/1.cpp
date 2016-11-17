#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string s;
	cin >> s;

	int a = 0, b = 0;
	// for(auto x: s) {
	// 	if(x == 'A')
	// 		a++;
	// 	else 
	// 		b++;
	// }

	int size = s.size();

	for (int i = 0; i < size; ++i)
	{
		if(s[i] == 'A')
			a++;
		else 
			b++;
	}
	
	if(a == b)
		cout << "Friendship \n";
	else if(a > b)
		cout << "Anton \n";
	else 
		cout << "Danik \n"; 
	return 0;
}