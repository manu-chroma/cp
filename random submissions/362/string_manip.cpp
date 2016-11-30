#include <bits/stdc++.h>
using namespace std;

int main() {
        string s = "hell";

	s.push_back('o');
        cout << s << endl;

	cout << s.erase(s.size()-1) << endl;
	// now i want the string to transform to this.
	// hell -> hola
	
	s.erase(s.size()-1);
	// hel
	s.push_back('a');
	//helo
	s.erase(s.begin()+1);
	s.insert(s.begin()+1, 'o');

	cout << s << endl;

}




