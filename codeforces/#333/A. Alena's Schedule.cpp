//http://codeforces.com/contest/602/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int b1, n1;
	cin >> n1 >> b1;


	long long int a=0,b=0;
	if(n1 == 0)
		a=0;
	else {
		for(int i = n1; i > 0 ; i--) {
			int temp;
			cin >> temp ;
			a += (temp*ceil(pow(b1,i-1)));
		//cout << a << endl;
		}
	}



	int b2, n2;
	cin >> n2 >> b2;
	if(n2 == 0)
		b = 0;
	else {
		for(int i = n2; i > 0 ; i--) {

            long long temp;
			cin>>temp ;

			b += ((ceil(pow(b2,i-1))*temp));
		//cout << b << endl;
		}
	}
	if(a>b)
		cout << ">" << endl;
	else if(a == b)
		cout << "=" << endl;
	else cout << "<" << endl;
	return 0;
}
