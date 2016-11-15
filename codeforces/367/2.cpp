#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
typedef  double ld;

#define max 100005

int bs(int arr[], int l, int r, int x)
{
	if (r>=l)
	{
		int mid = l + (r - l)/2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return bs(arr, l, mid-1, x);
		return bs(arr, mid+1, r, x);
	}

	return l; // lower bound
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int price[max];
	for (int i = 0; i < n; ++i)
	{
		cin >> price[i];
	}

	sort(price,price+n);

	int days ;
	cin >> days;
	for (int i = 0; i < days; ++i)
	{
		int yo;
		cin >> yo;
		int index = bs(price, 0, n-1, yo);
		
		// cout << "index is " << index << endl;
		
		int* p = std::upper_bound( price, price + n, yo );
		if( p == price + n )
			cout << n << "\n";
		
		else
			cout << p - price << "\n";
	}

	return 0;
}