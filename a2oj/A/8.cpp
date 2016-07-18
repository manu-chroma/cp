#include <bits/stdc++.h>
using namespace std;

bool check_if_lucky(int n) {
	int i ;
	while(n) {
		int temp = n%10;
		if(temp != 7 && temp != 4)
			return 0;
		n /= 10;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 4; i <= n; ++i)
	{
		if(check_if_lucky(i))
			if(n%i == 0){
				cout << "YES" ;
				return 0;	
			}
	}
	cout << "NO";
	return 0;
}
