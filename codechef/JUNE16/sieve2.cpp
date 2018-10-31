#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

unsigned long long int sieve[SIZE];
void init() {
	for (int i = 0; i < SIZE; ++i)
	{
		sieve[i] = true;
	}
}

void generate() {
	int m = ceil(sqrt(SIZE));
	cout << m << endl;
	for (int i = 2; i <= m; ++i)
		if(sieve[i] == 1) { 
			for (int j = 2; (j*i) < SIZE; j++)
				sieve[(j*i)] = 0;

			// check
			for (int j = 2; (j*i) < SIZE ; j = j*j)
			{
				sieve[j] = -1;
			}
		}
}

void print_primes() {
	for (int i = 2; i < SIZE; ++i)
	{
		if(sieve[i] == true) {
			cout << i << endl;
		}
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	init();
	generate();
	print_primes();
	cout << "done" << endl;
	return 0;
}
