#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long int li;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);

	string s, a = "";
	getline(cin,s);

	int i = 0;
	long int exp;
	long int dot = 1;
	for (; i < s.size(); ++i)
	{
		if(s[i] == 'e') {
			string temp = "";
			for (int j = i+1; j < s.size(); ++j)
			{
				temp.push_back(s[j]);
			}

			exp = stoi(temp);
			break;
		}
	}

	dot += exp;
		// remove e
	while(s[s.size()-1] != 'e') {
		s.erase(s.begin()+s.size()-1);
	}
	s.erase(s.begin()+s.size()-1);

	s.erase(s.begin()+dot-exp);
	cout << "value of string size and exp are " << s.size() << " " << dot << endl;
	if(exp > s.size()) {
		while(exp > s.size()) {
			cout << "inside" << endl;
			s.push_back('0');
		// cout << "value of s is " << s << endl;
		}

	}
	else {
		s.insert(s.begin()+dot, '.');
		
	//remove all useles  0's && dot too
		while(s[s.size()-1] == '0')
			s.erase(s.begin()+s.size()-1);

		while(s[0] == '0' && s[1] != '.') 
			s.erase(s.begin());

		if(s[s.size()-1] == '.' )
			s.erase(s.begin()+s.size()-1);


	}
	if(!s.empty())
		cout << s << endl ;
	else
		cout << 0;

	return 0;
}