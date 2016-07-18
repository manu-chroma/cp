#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	int a[4] = {0};

	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] == '1')
			a[1]++;
		else if(s[i] == '2')
			a[2]++;
		else if(s[i] == '3')
			a[3]++;
		else 
			a[0]++;
	}
	
	for (int i = 1; i < 4; ++i)
	{
		for (int j = 0; j < a[i]; ++j)
		{
			cout << i  ;
			if(a[0]--)
				cout << "+";
		}
	}

	return 0;
}
