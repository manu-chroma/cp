#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

bool check_if_leap(li year) {
	if(year % 400 == 0 || (year%4 == 0 && year%100 != 0))
		return 1;
	else 
		return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);

	li year;
	cin >> year;
	li counter = 0;
	do {
		
		if(!check_if_leap(year)) counter++;
		else 
			counter += 2;
		cout << "value of counter is " << counter << endl;
		year++;
	} while(counter%7 != 0);

	cout << year+1 << "\n";
	return 0;
}












