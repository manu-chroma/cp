#include <bits/stdc++.h>
using namespace std;


typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	vector <int> a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);

	cout << (a.begin() == a.end()) << "\n";
	cout << (--a.begin() == a.end()) << "\n";

	return 0;
}