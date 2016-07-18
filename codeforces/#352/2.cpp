#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{	
	int a[26] = {0}; // 0 to 25

	int size;
	cin>>size;

	string s;
	cin>>s;

	for (int i=0; i < s.size() ; i++) {
		int temp = s[i]-97;
		a[temp]++;
	}

	//actual algorithm
	int counter = 0;
	int zeros =0;
	for (int i = 0; i < 26; ++i)
	{	
		if(a[i] == 0) {
			zeros++;
		}
		if(a[i]>1) {
			counter += (a[i]-1); 
		}
	}

	if(zeros >= counter) {
		cout << counter << endl;
	}

	else {
		cout << -1 << endl;
	}

 	return 0;
}