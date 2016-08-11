#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int li; 

int main() {
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	// li ans = 0;
	int b[100001];

	// take beauty input
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}

	int cap[100001]; // captial cities
	bool smart[100001]; // bool array to map capital cities
	
	// taking capital cities as input
	for (int i = 0; i < k; ++i)
	{
		cin >> cap[i];
		cap[i]--;
		smart[cap[i]] = 1; 
	}
	
	li ans = 0;
	//all neighbours added except for captial cities
	for (int i = 0; i < n-1; ++i) // why not n ?
	{	
		if(!smart[i] && !smart[i+1]) {
			ans += (b[i]*b[i+1]);
		}
	}

	// completing the revolution 
	if(!smart[n-1] && !smart[0])
		ans += (b[n-1]*b[0]);


	// cout << "current ans is " << ans << endl;

	li capital_sum = 0, normal_sum = 0;
	for (int i = 0; i < n; i++)
	{
		if(!smart[i]){
			normal_sum += b[i];
		}
		else if(smart[i])
			capital_sum += b[i];
	}

	ans += (normal_sum*capital_sum);

	li capital_sum_square = 0;

	for (int i = 0 ; i < k ; i++)
	{
		capital_sum_square += ((li)pow(b[cap[i]],2));
	}

	li yo = ((li)pow(capital_sum,2) - capital_sum_square)/2;
	ans += yo;

	cout << ans << endl;

	return 0;
}


