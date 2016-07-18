#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li jacket, sock, money;
	cin >> jacket >> sock >> money;

	money -= jacket;
	if(money == sock || money < sock) {
		cout << "Unlucky Chef";
	}

	else {
		cout << "Lucky Chef" ;		
	}
	return 0;
}
