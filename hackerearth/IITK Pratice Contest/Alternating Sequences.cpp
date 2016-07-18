#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li n, temp;
	cin >> n;

	vector <li> a;
	cin >> temp;
	a.push_back(temp);

	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		if(temp * a.back() < 0) {
			a.push_back(temp);
		}
		else {
			if(abs(temp) < abs(a.back())) {
				// cout << "current end is " << a.back(	) << endl;
				a[a.size()-1] = temp;
				// cout << "now it is " << a.back() << endl;
			}
		}
	}

	li ans = 1;
	temp = -1;
	for (int i = 1; i < a.size(); ++i)
	{
		if(abs(a[i-1]) < abs(a[i])) ans++;
		else if(temp < ans) {
			temp = ans;
			ans = 1;
		}
	}
	cout << max(temp,ans) << endl;


	// for (int i = 1; i < a.size() ; ++i)
	// {
	// 	if(a[i]*a[i+1] > 0) {
	// 		if(a[i] > a[i+1]) a.erase(a[i]);
	// 		else a.erase(a[i+1]);
	// 	}
	// }
	// li temp, temp1, temp3;
	// cin >> temp;
	
	// bool check = (temp > 0) ? 1 : 0;
	
	// for (li i = 0; i < n-1; ++i)
	// {
	// 	cin >> temp1;
	// 	if((check && temp1 < 0) || (!check && temp1 > 0) && abs(temp) < abs(temp1)) {
	// 		ans++;
	// 		temp3 = temp;
	// 		temp = temp1;
	// 		check = !check;
	// 	} 
	// 	else if(abs(temp) > abs(temp1) && abs(temp3) < abs(temp1)) {
	// 		temp3 = temp;
	// 		temp = temp1;
	// 	}
	// }
	// cout << ans << "\n" ;

	return 0;
}
