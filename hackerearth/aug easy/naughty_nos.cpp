#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

bool solve(li n, li len) {
	
	li temp = n;

	li ans = 0;

	// Print the number of 2s that divide n
	if (n%2 == 0)
	{
		ans++;
		n = n/2;
		while(n%2 == 0) { 
			n = n/2; 
		}
	}

	

    // n must be odd at this point.  So we can skip one element (Note i = i +2)
	for (li i = 3; i <= sqrt(n); i = i+2)
	{
        // While i divides n, print i and divide n
		if (n%i == 0)
		{
			ans++;
			n /= i;

			while(n%i == 0) { 
				n /= i;
			}
		}
	}

	li yo = 0;

	if (temp > 2) {

		cout << "length of number and distinct factors are " << len << " " << ans << endl;

		if(ans == len) 
			return 1;
		else 
			return 0;
	}

	else {

			return 1; // num of digits in 2

		}
	}

	int main() {
		ios_base::sync_with_stdio(false);
	 // cin.tie(0); cout.tie(0);

		li q;
		cin >> q;
		while(q--) {
			li ans = 0;
			for (li i = 0; i < q; ++i)
			{
				li a,b;
				cin >> a >> b;

				for (li j = a; j <= b; ++j)
				{
					li len = 0;
					li temp = j;
					while(temp) {
						len++;
						temp /= 10;
					}
				// cout << "length of current num is " << j << " " << len << endl;
					if(solve(j,len))
						ans++;
				}
			}

			cout << ans << "\n" ;
		}
	}