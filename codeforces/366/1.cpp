#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string s  = "that I hate " ;
	string r = "that I love ";


	cout << "I hate " ;

	n--;
	bool a = 1;

	while(n--) {
		if(a) // even
		{
			cout << r ;
			a = 0;
		}
		else {
			cout << s ;
			a = 1;
		}
	}

	cout << "it" << "\n";

	return 0;
}