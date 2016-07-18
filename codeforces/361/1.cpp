#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n;
	cin >> n;
	li number;
	cin >> number;
	// int a[] = {1,2,3}, b[] = {4,5,6}, c[]= {7,8,9};
	int a[] = {123,321,456,654,789,987,147,741,258,852,369,963,159,951,357,753};
	int size = sizeof(a)/sizeof(a[0]);

	int 2d[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {-1,0,-1}}
	
	for (int i = 0; i < n-1; ++i)
	{
		int temp = number%10;
		number /= 10;
		int next = number%10;

		if(i-1 >= 0 && )
	}


	cout << "NO" ;
	return 0;
}
