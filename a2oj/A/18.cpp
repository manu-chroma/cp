#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	bool a[26] = {0};
	// cout << (int)'b' - 'a' << endl;
	char temp;
	cin >> temp;
	int ans = 0;
	while(temp != '}') {
		cin >> temp;
		if(temp != ',' && temp != '}')
			a[(int)temp-'a'] = 1;
	}
	for (int i = 0; i < 26 ; ++i)
	{
		ans += a[i];
	}
	cout << ans;
	return 0;
}
