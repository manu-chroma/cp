#include <bits/stdc++.h>
using namespace std;
bool ar[1000];
int main(int argc, char const *argv[])
{	int size, ;
	cin >> size;
	bool temp;
	//input taken
	for (int i = 1; i <= size; i++)
	{
		cin >> ar[i];
	}
	//logic
	int count0, count1;
	count0 = count1 = 0;
	bool check1 =1;
	for(int i = 1; i <= n; i++) {
		if(ar[i] == 0 && check1) {
			count0++;
		}
		else if(ar[i] == 1) {
			count1++;
			check1 = 0;
		}
		else if ()
	}


	return 0;
	}
}