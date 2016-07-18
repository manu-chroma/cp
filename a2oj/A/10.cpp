#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int iz, jz, temp;
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <= 5; ++j)
		{
			cin >> temp;
			if(temp == 1) {
				iz = i;
				jz = j;
				break;
			}

		}
	}
	cout << (abs(iz-3)+abs(jz-3)) ;
	return 0;
}
