#include <bits/stdc++.h>
using namespace std;

typedef long long int lli; 

lli find_closest(lli num) {

}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	lli tc;
	cin >> tc;
	while(tc-) {
		lli num;
		cin >> num;
		lli i =0;
		while(num) {
			num = find_closest(num);
			i++;
		}
	}

	return 0;
}


