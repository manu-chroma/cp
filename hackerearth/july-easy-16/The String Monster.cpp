#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 

	int tc;
	cin >> tc;
	while(tc--) {
		bool done = 0;

		int n;
		cin >> n;
		vector <string> s;
		
		for (int i = 0; i < n; ++i)
		{
			string t;
			cin >> t;
			s.push_back(t);
		}
		// input done

		// pre processing test string
		string to;
		cin >> to;
		int length = to.length();
		int map[26] = {0};
		for (int i = 0; i < to.length(); ++i)
		{
			map[(int)to[i]-'a']++;
		}

		if(n == 1) {
			// cout << "here" << endl;
			int map1[26] = {0};
			for (int z = 0; z < s[0].length(); ++z)
			{
				map1[(int)s[0][z] - 'a']++;
			}
			bool check = 1;
			for (int i = 0; i < 26; ++i)
			{	
				if(map[i] != map1[i]) check = 0;
			}

			if(check == 1) {
				cout << "YES" << endl;;
				done = 1;
			}
			else cout << "NO" << endl;
		}
		else {
			for (int i = 0; i < s.size(); ++i)
			{
				for (int j = i+1; j < s.size(); ++j)
				{
					if(s[i].length()+s[j].length() == length) {
					// cout << "here" << endl;
						int map1[26] = {0};
						for (int z = 0; z < s[i].length(); ++z)
						{
							map1[(int)s[i][z] - 'a']++;
						}
						for (int z = 0; z < s[j].length(); ++z)
						{
							map1[(int)s[j][z] - 'a']++;
						}

					//now check
						bool check = 1;
						for (int i = 0; i < 26; ++i)
						{	
							if(map[i] != map1[i]) check = 0;
						}

						if(check == 1 && done == 0) {
							cout << "YES" << endl;;
							done = 1;
						}
					}
				}
			}
			if(done == 0)
				cout << "NO" << endl;
		}
	}
	return 0;
}
