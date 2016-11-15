#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int answer[50001]; //start from one ?

int main() {
	// ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	int a1, a2, a3;
	int a_sum;
	
	cout << "? 1 2" << endl;
	fflush(stdout);
	cin >> a1;

	cout << "? 2 3" << endl;
	fflush(stdout);
	cin >> a2;

	cout << "? 1 3" << endl;
	fflush(stdout);
	cin >> a3;

	a_sum = (a1+a2+a3)/2;
	answer[1] = a_sum - a2;
	answer[2] = a_sum - a3;
	answer[3] = a_sum - a1;

	for (int i = 0; i < n-3; ++i)
	{
		
		cout << "? 1 " << i+4 << endl;
		fflush(stdout);
		int yo;
		cin >> yo;
		answer[i+4] = yo-answer[1];
	}

	// string s;
	// s.push_back('!');
	// for (int i = 1; i <= n; ++i)
	// {
	// 	s.push_back(' ');
	// 	// char p = (char)answer[i];
	// 	s.push_back(answer[i]+'0');
	// }
	// cout << s << endl;

	cout << "! ";
	fflush(stdout);
	for (int i = 1; i <= n; ++i)
	{
		cout << answer[i] << " " ;
		fflush(stdout);
	}
	cout << endl;
	fflush(stdout);
	return 0;
}