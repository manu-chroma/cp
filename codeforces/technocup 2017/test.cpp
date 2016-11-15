#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	string s = "23,44.0";
	string r = "233.45";
	cout << stod(s) + stod(r) << endl;
	return 0;
}