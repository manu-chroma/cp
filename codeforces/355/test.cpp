#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int current_height = 4, time =0, k =2;

	if(current_height > 0) {
		
		time += (current_height/k);
		
		if(current_height%k > 0) {
			current_height = 0;
			time++;
		} 
	}

	cout << time << endl;

	return 0;
}
