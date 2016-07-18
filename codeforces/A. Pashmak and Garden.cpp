//http://codeforces.com/problemset/problem/459/A
##include "iostream"
using namespace std;

#include<bits/stdc++.h>
using namespace std;
int main() {
	int x1,x2,y1,y2;
	int dis;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4;
	if(x1 == x2) {
		dis = abs(y1-y2);
		if(x1-dis >= -1000)
			cout << x1 << " " ;
		else if(x1+dis <= 1000)
			cout << x1 << " " ;
		else {
			cout << "-1" << endl;
			return;
		}
		
	}
	else {
		dis = abs(x1-x2);
	}



}