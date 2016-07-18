#include <bits/stdc++.h>
using namespace std;

int find_max(int a[]) {
	int max = -1,index;
	for (int i = 0; i < 3; i++)
	{
		if(a[i] > max) {
			index=i;
			max=a[i];
		// 	cout << "value of max is " << max <<endl;
		}
	}
	// cout << "index is " << index << endl; 
	return index;
}

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--) {
		int n;
		int a[3]= {0,0,0};
		cin>>n;
		char input;
		for (int i = 0; i < n; i++)
		{
			cin>>input;
			if(input == 'R') {
				a[0]++;
			}
			else if (input == 'G') {
				a[1]++;
			}
			else if (input == 'B') {
				a[2]++;
			}	
		}

		// for(int i=0; i<3; i++) {
		// 	cout << a[i] << endl;
		// }
		int index = find_max(a),ans=0;

		for (int i = 0; i < 3; i++)
		{
			if(index != i) {
				ans +=a[i];
			}
		}
		cout << ans << endl;
		
	} 
	return 0;
}