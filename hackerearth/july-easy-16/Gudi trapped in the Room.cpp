#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	int tc;
	cin >> tc;
	while(tc--) {
		int num;
		cin >> num;
		int offset, rotations;
		cin >> offset >> rotations;
		string s = to_string(num);
		// cout << "string is " << s << endl;

		vector <int> ans;
		//check rotation style
		bool check = (rotations%2 == 0) ? 1 : 0;

		for (int j = 0; j < s.length(); )
		{
			int a = (int)s[j] - '0'; // extract number
			// int min = a, repeat = a+1; // for check
			int test[12] = {0};
			// cout << "value of a " << a << endl;
			test[0] = a;
			for (int i = 1; i < 12; ++i)
			{
				int temp = (test[i-1]+offset);
				temp = temp%10;
				test[i] = temp;
			}
			int min = test[0];
			for (int i = 1; i < 12; ++i)
			{
				if(test[i] < min) min = test[i];
			}
			// if(a != 0) {
			// 	while(min != repeat && min != 0) {
			// 		min += offset;
			// 		min = min%10;
			// 		if(min < repeat) repeat = min;
			// 	}
			// }

			ans.push_back(min);

			if(rotations+1 % 2 == 0 && s.length() % 2 == 0) j +=2;
			else j++;
		}
		sort(ans.begin(), ans.end());
		for (int i = 0; i < ans.size(); ++i)
		{
			cout << ans[i] ;
		}
		cout << endl;
	}
	return 0;
}
