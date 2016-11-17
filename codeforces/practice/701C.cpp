#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	bool yo[100] = {0}; // 52 
	

	for(int i = 0, j = 0; i < n ; i++) {
		if(i != j && s[i] == s[j]) {
			j++;
			i++;
		}
		else if(i == j) {
			if(yo[s[i]] = 1)
		}
	}	

	int size = i-j+1 ;
	cout << size << "\n";

	return 0;
}

