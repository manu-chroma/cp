#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void extract_and_add (int n) {
	int temp;
	int a[5], i=0;
	while(n) {
		a[i] = n%10 ;
		n /= 10;
		i++;
	}

	//pushing back reverse of the array
	while(i--) {
		v.push_back(a[i]);
	}
}

int main(int argc, char const *argv[])
{

	v.push_back(0);
	for (int i=0 ; i<400; i++) {
		extract_and_add(i);
	}

	int n;
	cin>>n;
	cout << v[n] << endl;
	return 0;
}
