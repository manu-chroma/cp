#include <bits/stdc++.h>
using namespace std;

typedef long long int lli; 

#define MAX 100

void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        // printf("%d ", 2);
        ans.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            // printf("%d ", i);
            ans.push_back(i);
            n = n/i;
        }
    }
 
 	li yo = 0;
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2) {
        // printf ("%d ", n);

        //do the logic here
        for (int i = 0; i < ans.size(); ++i)
        {
        	while(a[i]) {
        		yo++;
        		a[i] /= 10;
        	}
        }
    	return yo;
    }

    else 
    	return 1; // num of digits in 2
}

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	li q, ans = 0;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
			
	}
	return 0;
}
