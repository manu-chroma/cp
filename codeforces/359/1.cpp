#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li people, ice;
	cin >> people >> ice;
	string s;
	li temp, dis = 0;

	for (int i = 0; i < people; ++i)
	{
		// cout << ice << endl;
		cin >> s;
		cin >> temp;
		if(s == "+") 
			ice += temp;
		else if(s == "-") {
			if(temp <= ice) {
				ice -= temp;
			} 
			else dis++;
		}
	}
	cout << ice << " " << dis;
	return 0;
}
