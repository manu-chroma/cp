#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	int n;
	cin >> n;
	vector <int> ans, input;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		input.push_back(temp);
	} 	

	for (int i = 0; i < n; ++i)
	{
		if(input[i] == 1) 
			ans.push_back(i);
	}
	li a = 0;
	for (int i = 0; i < ans.size()-1;i++)
	{
		if(ans[i+1] - ans[i] == 1) {
			a++; 
		}
		else {
			a += ((ans[i+1]-ans[i]-1)*2);
		}
	}
	if(a == 0) cout << 1;
	else{
		a += ((ans[0])*2+ (n-1-ans[ans.size()-1])*2);
		cout << a;
	}
	return 0;
}
