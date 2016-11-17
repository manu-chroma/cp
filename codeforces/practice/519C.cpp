#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	unordered_map <string,int> db;
	int n;
	cin >> n;
	while(n--) {
		string s,temp;
		cin >> s;
		temp = s;
		bool check = 1;
		int i = 1;
		
		if(db.find(s) != db.end()) {
			i = db[s];
			db[s]++;
			s = temp+to_string(i);
			check = 0;
		}

		if(check == 1) {
			db[s] = 1;
			cout << "OK" << endl;
		}
		else {
			cout << s << "\n"; 
		}


	}
	return 0;
}
