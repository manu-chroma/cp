#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	//priority_queue <int> first;
	priority_queue<int, vector<int>, greater<int> > first;
	first.push(3);
	first.push(1);
	first.push(19);
	first.push(34);
	first.push(0);
	
	cout << first.top() << endl;
	first.pop();
	cout << first.top() << endl;
	first.pop();
	cout << first.top() << endl;
	first.pop();
	cout << first.top() << endl;
	first.pop();

	return 0;
}
