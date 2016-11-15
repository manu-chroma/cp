#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

int answer[50001]; //start from one ?

int main() {
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	string num = "";
	double answer = 0;

	for (int i = 0; i < s.length()-1; )
	{
		if(s[i] >= '0' && s[i] <= '9' ) {
			// cout << "pushing in num: " << s[i] << endl;
			num.push_back(s[i]);
			i++;
		}

		else if(s[i] == '.') {
			// if() {
				// both 2nd and 3rd are numbers: ignore the dot
			cout << "i+3 now is and s.length is: " << i+3 << " " << s.length()-1 << endl;
				if(i+3 <= s.length()-1 && (s[i+3] >= '0' && s[i+3] <= '9') && (s[i+2] >= '0' && s[i+2] <= '9')) {
					// if 3rd is also a number
					// cout << "im here \n";
					num.push_back(s[i+1]);
					num.push_back(s[i+2]);
					num.push_back(s[i+3]);
				}
			// }
			else {
				// it's double cent or one cent
				num.push_back(s[i]);
				num.push_back(s[i+1]);
				cout << "i+2 is: " << s[i+2] << endl;
				if(s[i+2] >= '0' && s[i+2] <= '9') {
					num.push_back(s[i+2]);
				}
			}
			i += 3;
		}

		else if(!num.empty()){
			// cout << "putting in stod: " << num << endl;
			answer += stod(num);
			num = "";
		}

		else {
			i++;
		}
	}	


	if(!num.empty()){
		// cout << "putting in stod: " << num << endl;
		answer += stod(num);
		num = "";
	}

	string final = to_string(answer);

	if(final[final.length()-2] == '.')
		final.push_back('0');

	int int_size = (final[final.length()-3] == '0') ? final.length()-4 : final.length()-1;

	if(int_size < 3) {
		cout << answer << "\n";
		return 0;
	}

	int mod = int_size%3;
	insert(mod, '.');


	return 0;
}