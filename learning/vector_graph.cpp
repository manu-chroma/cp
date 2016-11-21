#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	vector <int> a[10]; //essential to define size, otherwise would fail.

	a[0].push_back(1);
	a[0].push_back(2);
	a[1].push_back(5);

	for (int j = 0; j < 3; ++j)
	{
		for (int i = 0; i < a[j].size(); ++i)
		{
			cout << a[j][i];
		}	
		cout << endl;
	}
	

	return 0;
}