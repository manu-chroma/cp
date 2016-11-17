#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

li find(long double c) {
	long double a = 1, b = 1, x1, determinant;
	c = -2*c;
	determinant = b*b - 4*a*c;
	x1 = (-b + sqrt(determinant)) / (2*a);
	return (int)x1;

}

int main(int argc, char const *argv[])
{
	li n, k, ans;
	cin >> n >> k;
	vector <li> a;
	a.push_back(1);
	for (li i = 1; i <= n; ++i)
	{
		li temp;
		cin >> temp;
		a.push_back(temp);
	}
	li l = find((long double)k);
	ans = (l*(l+1))/2;
	ans = k - ans;
	if(ans == 0)
		ans = l;
	cout << a[ans];	
	return 0;
}
