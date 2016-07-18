#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void extract_and_add (int n) {
	int temp;
	while(n) {
		temp = n%10;
		cout << temp << endl;
		n /= 10;
	}
}


int main(int argc, char const *argv[])
{
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] - 97 << endl;
	}
	return 0;
}