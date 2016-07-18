#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n, x,y,z, temp;
	z = y = x = 0;
	cin >> n;
	while(n--) {
		cin >> temp;
		x += temp;
		cin >> temp;
		y += temp;
		cin >> temp;
		z += temp;
	}
	if(z == 0 && x == 0 && y == 0) {
		cout << "YES";
	}
	else 
		cout << "NO";
	return 0;
}
