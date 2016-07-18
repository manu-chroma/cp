#include <bits/stdc++.h>
using namespace std;


/*
  |     |     |
  |     |     |
  |     |     |
 ____ _____ _____

 FIRST SECOND THIRD 

 mission is to bring all the disks from FIRST TO SECOND USING THIRD
*/

void solve(int n, char a,char b, char c) {
	if(n == 1) {
		cout << "move disk from tower " << a << " to " << b << endl;  
		return;
	}

	else {
		solve(n-1,a,c,b);
		//cout << "move disk from tower " << a << " to " << b << endl; 
		cout << "calling 2nd recursive call now" << endl;
		cout << endl;
		solve(1,a,b,c);
		cout << "calling 3rd recursive call now" << endl;
		cout << endl;
		solve(n-1,c,b,a);
	}

}	
//from a to b using c 
int main(int argc, char const *argv[])
{
	int n;
	cout << "enter the number of disks in the tower: " ;
	cin>>n;
	solve(n,'a','b','c'); //misson is to shift from 1->2
	return 0;
}
