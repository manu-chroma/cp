#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	li n;
	cin >> n;
	li yo1, yo2;
	yo1 = yo2 = 0; 
	while(n--) {
		li a,b;
		cin >> a >> b;
		if(a > b) 
			yo1++;
		else if(b > a) 
			yo2++;
	}
	if(yo1 > yo2) 
		cout << "Mishka" << "\n";
	else if(yo2 > yo1)
		cout << "Chris" << "\n";
	else 
		cout << "Friendship is magic!^^" << "\n";
	return 0;
}