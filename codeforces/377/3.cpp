#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	li breakfast, dinner, supper;
	cin >> breakfast >> dinner >> supper;

	// cout << breakfast << " " << dinner << " " << supper << endl;
	// all equal
	if(breakfast == dinner && breakfast == supper) {
		cout << 0 << "\n";
	}


	// pair equal and 3rd smaller
	else if(breakfast == supper && breakfast > dinner) {
		// cout << "wow1" << endl;
		cout << breakfast-dinner-1 << "\n";
	}
	else if(breakfast == dinner && breakfast > supper) {
		// cout << "wow2" << endl;
		cout << breakfast-supper-1 << "\n";
	}
	else if(supper == dinner && supper > breakfast) {
		// cout << "wow3" << endl;
		cout << supper-breakfast-1 << "\n";
	}

	// assuming all different 
	else {
		// cout << "last loop" << endl;
		int max = -1;
		// finding max of all
		if(breakfast > supper && breakfast > dinner) {
			max = 1;
		} 
		else if (supper > breakfast && supper > dinner) {
			max = 3;
		}
		else if(dinner > breakfast && dinner > supper) {
			max = 2;
		}

		li b, d, s;
		if(max == 1) { // breakfast
			d = breakfast-1;
			s = breakfast-1;
			cout << (d-dinner) + (s-supper) << "\n";
		}
		else if(max == 3) { // supper
			b = supper-1;
			d = supper-1;
			cout << (b-breakfast) + (d-dinner) << "\n";
		}
		else if(max == 2) { // dinner
			b = dinner-1;
			s = dinner-1;
			cout << (b-breakfast) + (s-supper) << "\n";
		}
	}
	return 0;
}