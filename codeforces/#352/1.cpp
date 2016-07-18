#include <bits/stdc++.h>
using namespace std;

int gen10(int n) {
	n -= 10;
	int answer = n/2;
	answer = 10+answer;
	
	if(n%2 != 0) {
		answer = answer%10;
		return answer;	
	}
	else {
		answer /=10;
		answer = answer%10;
		return answer;
	}
}

int gen100(int n) {
	n -= 190;
	int answer = n/3;
	answer  = 100+answer;

	int a[3],i=2;
	while(answer) {

		a[i] = answer%10;
		answer /= 10;
		i--;
	}

	if (n%3 == 2)
		return a[0];
	else if (n%3 == 0)
		return a[1];
	else 
		return a[2];
}

int main(int argc, char const *argv[])
{
	int n, answer;
	cin>>n;
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	if(n < 10) {
		answer = a[n];
	}
	else if(n < 100) {
		answer = gen10(n);
	}
	else {
		answer = gen100(n);
	}

	cout << answer << endl;
	return 0;
}
