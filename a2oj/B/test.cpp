#include <bits/stdc++.h>
#include <string>

using namespace std;

string binary(int num, string s) {
	if(num <= 1) {
		// cout << num;
		s.push_back(num);
		return s;
	}
	int rem = num % 2;
	binary(num/2, s);
	cout << rem;
	s.push_back(itoa(rem));
	return s;
}

int main(int argc, char const *argv[])
{	
	int a;
	cin >> a;
	string s = "";
	s =	binary(a,s);
	cout << endl;
	cout << s << endl;
	return 0;
}
