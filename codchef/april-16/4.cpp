#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long int fast_exp(long long int base, long long int exp) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%mod;
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
}


int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--) {
		long long int n;
		cin>>n;
		long long int colors;
		cin>>colors;

		//mod optimisation
		colors = colors%mod;
		
		// using Fast Modulo Multiplication (Exponential Squaring)
		long long int ans = fast_exp(colors-1,n-1);

		ans *= colors;
		ans = ans%mod;	
		cout << ans << endl;
	}
	return 0;
}
