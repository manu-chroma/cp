#include <bits/stdc++.h>
using namespace std;

#define SIZE 100000
#define crying 100


typedef long long int li;

bool sieve[SIZE]; 
int test[SIZE];


void init() {
	for (int i = 0; i < SIZE; ++i)
	{
		sieve[i] = 1;
	}
}



void modified_gen() {
	int m = ceil(sqrt(SIZE));

	for (int i = 2; i <= m; ++i)
		if(sieve[i] == 1) { // if the given number is prime 
			test[i] = 1;
			for (int j = 2; (j*i) < SIZE; j++) {
				sieve[(j*i)] = 0;
				test[(j*i)]++;
			}
		}
	}


// void print_s() {
// 	for (int i = 0; i <= crying; ++i)
// 	{
// 		cout << i << " " << test[i] << endl;
// 	}
// }

	int main(int argc, char const *argv[])
	{
		ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

		init();
		modified_gen();
		// print_s();

		sieve[2] = 1;

		int q;
		cin >> q;
		test[1] = 1;
		
		// init for len
		int change = 10, current = 1;
		
		while(q--) {
			int ans = 0, a,b;
			cin >> a >> b;

			for (li j = a; j <= b; ++j)
			{
				
				if((int)(log10(j)+1) == test[j]) 
					ans++;
			}

			cout << ans << "\n" ;
		}
		return 0;
	}
