#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int tc;
	cin>>tc;
	while(tc--) {
		unsigned long long int n,m;
		cin>>n>>m;
		
		if(m==1 && n==1) { //both 1
			cout << "No" << endl;
		}

		else if(n==1 || m==1) { //any one of them is 1
			//singular row|column
 			if(n<=2 && m<=2) { // 1 and other is 1 or 2
				cout << "Yes" << endl;
			}
			else { // case of (1,x) and x is greater than 2 or vice-versa
				cout << "No" << endl;
			}
		}

		else if(n%2==0 || m%2 ==0) { //any of them is even | takes care of 2,2 and above
				cout << "Yes" << endl;
			}

		else  {
			cout << "No" << endl;
		}

	}
return 0;
}