#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	li tc;
	cin >> tc;
	li yolo = 1;
	while(tc--) {
		li n;
		cin >> n;
		string temp;
		li ans = -1;
		char keep = 'a';
		cin.ignore();

		for (int j = 0; j < n; ++j)
		{
			string s;
			getline(cin,s);
			li sum = 0;

			int check[26] = {0};
			for (int i = 0; i < s.size(); ++i)
			{
				// int yo = (int)s[i]-'A';
				if(s[i] != ' ') {
					if(check[(int)s[i]-'A'] == 0) {
						sum++;
						check[(int)s[i]-'A'] = 1;
					}
				}
			}	
			// bool array proper
			if(sum > ans) {
				temp = s;
				ans = sum;
			}

			else if(sum == ans) {
				if(s < temp) { // if s is smaller
					// if(strcmp("aa", "bz") > 0)
					temp = s;
					ans = sum;
					// keep = s[0];
				}
			}

		}
		cout << "Case #" << yolo << ": " << temp << endl;
		yolo++;
	}
	return 0;
}
