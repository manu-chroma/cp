#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli a[100005];

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	lli n,h,k;
	cin>>n>>h>>k; // k destryoed every second, h is the height of pipe

	for (lli i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	// input done
	lli current_height=0, time=0;
	for (lli i = 0; i < n; )
	{
		//cout << "current_height is " << current_height << " and time is " << time << endl;
			while( current_height+a[i] <= h && (i <n)) {
				current_height += a[i];
				i++;
			}

		while(current_height+a[i] > h ) {
			current_height -= k;
			time++;
		}
		if(current_height < 0)
			current_height = 0;
	}

	if(current_height > 0) {
		
		time += (current_height/k);

		if(current_height%k > 0) {
			current_height = 0;
			time++;
		} 
	}

	cout << time;
	return 0;

}