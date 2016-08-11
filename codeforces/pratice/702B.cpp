#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	li r = 1;
	
	vector <li> warm;

	while(r <= 2*10e9) {
		// warm[r] = 1;
		warm.push_back(r);
		r *= 2;
		// yo++;
	}
	
	li n;
	cin >> n;

	vector <li> num;
	for (int i = 0; i < n; ++i)
	{
		li temp;
		cin >> temp;
		num.push_back(temp);
	}

	unordered_map <li,li> yo;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{	
			li counter = num[i]+num[j];

			if(!yo[counter])
				yo[counter] = 1;
			else 
				yo[counter] += 1;
		}
	}

	li ans = 0;
	for (int i = 0; i < warm.size(); ++i)
	{
		if(yo[warm[i]])
			ans += yo[warm[i]];
	}
	cout << ans ;
}