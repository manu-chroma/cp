// http://codeforces.com/problemset/problem/337/B

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double a, b, c, d;
	cin >> a>>b>>c>>d;
	double min1 = a/c, min2 = b/d;
	double answer;
	if(a/c < b/d) { // 1st is min 
		 answer = (b - (d*a/c));
		 cout << answer << "/" << b << endl;
	}
	else {
		answer = (a - (c*(b/d))); 
		cout << answer << "/" << a << endl;
	}
	

	return 0;
}
