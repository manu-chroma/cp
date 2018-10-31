#include <bits/stdc++.h>
using namespace std;
// assuming lowercase input at all times
int findcost(char a) {
	return (a-96);
}

int solve_req(string s, int len) {
	if(len < 0) 		
		return 0;

	return  (findcost(s[len]) + solve_req(s,--len));
}


void solve_req_2(string s, int len, int solution) {
	if(len < 0){
		cout << solution << "\n";
		return; 		
	}

	solution += findcost(s[len]);
	solve_req_2(s,--len, solution);
}

int solve_iter(string s,int len) {
	int answer=0;
	for (int i = 0; i < len; i++) 
	{
		answer +=findcost(s[i]);
	}

	return answer;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	long long int tc;
	cin>>tc;
	while(tc--) {
		string s;
		cin>>s;
		//cout << solve_req(s,s.length()-1) << endl;
		solve_req_2(s,s.length()-1, 0);
	}

	return 0;
}
