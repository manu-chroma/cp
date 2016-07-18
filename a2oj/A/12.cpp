#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	n = min(n,m);
	if(n%2 == 0) {
		cout << "Malvika";
	}	
	else 
		cout << "Akshat";
	return 0;
}
