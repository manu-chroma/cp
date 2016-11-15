#include <bits/stdc++.h>
using namespace std;

typedef long long int li; 

bool check(li t1, li t2, li k) {
	if(k >= t1 && k <= t2)
		return 1;
	else 
		return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	li l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;

	li t1, t2;
	// contained
	if(l1 <= l2 && r1 >= r2) {
		perror ( "1 " );
		t1 = l2;
		t2 = r2;
	}
	else if(l2 <= l1 && r2 >= r1) {
        perror ( "2 " );
		t1 = l1;
		t2 = r1;
	}
	// overlapping
	else if(l1 <= l2 && l2 <= r1) {
		perror ( "3 " );
		t1 = l2;
		t2 = r1;
	}
	else if(l2 <= l1 && l1 <= r2) {
		perror ("4 "); 
		t1 = l1;
		t2 = r2;
	}
	else {
	    perror ("5 " );
	   // perror << "5" << endl;
		cout << 0 << "\n";
		return 0;
	}

	li ans = check(t1, t2, k) ? -1 : 0;
	ans += t2-t1+1;
	cout << ans << "\n";

	return 0;
}