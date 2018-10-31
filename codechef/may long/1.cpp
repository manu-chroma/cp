#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--) {
		int answer=0;
		int activities, origin;
		cin>>activities;
		string a;
		cin>>a;
		origin = (a == "INDIAN") ? 1 : 0;
		//cout << "origin is " << origin << endl;
		while(activities--) {
			string yolo;
			cin>>yolo;
			if(yolo == "CONTEST_WON") {
				int rank;
				cin>>rank;
				answer += 300;
				if(rank < 20) {
					answer += (20-rank); 
				}
			}
			else if(yolo == "TOP_CONTRIBUTOR") {
				answer += 300;
			}
			else if (yolo== "BUG_FOUND") {
				int sev;
				cin>>sev;
				answer += sev;

			}
			else if (yolo=="CONTEST_HOSTED") {
				answer += 50;
			}
			

			
		}
		if(origin == 1) { // is Indian
				answer = (int)ceil(answer/200);
			}  
			else {
				answer = (int)ceil(answer/400); 
			}

			cout << answer << endl;
	}
return 0;
}
