#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

bool check_leap(li year) {
	if(year % 400 == 0) return 1;
	else if(year % 4 ==0 && year % 100 != 0) return 1;
	return 0;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li year;
	cin >> year;
	int day = 0;
	
	do {
		if(check_leap(year)) day += 2;
		else day++;
		year++;
	} while(day%8 != 0);

	cout << --year << endl;
	return 0;
}
