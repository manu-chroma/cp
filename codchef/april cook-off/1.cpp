// https://www.codechef.com/COOK69/problems/MOVIEWKN
#include <bits/stdc++.h>
using namespace std;

int find_min(int a[], int num, int rating[]) {
	int counter = 0;
	for (int i = 1; i < num; i++)
	{
		if(a[counter] < a[i])
			counter=i;

		if(a[counter] == a[i]) {
			if(rating[i] > rating[counter]) {
				counter=i;
			}
		}
		//cout << "current min is " << a[i] << endl;
	}	
	return counter;
}

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--) {
		int num;
		cin>>num;
		int movie[100];
		int rating[100];
		//get the input
		for(int i=0 ; i<num; i++) {
			cin>>movie[i];
		}
		for(int i=0 ; i<num; i++) {
			cin>>rating[i];
		}

		for(int i=0 ; i<num; i++) {
			movie[i] *=rating[i];
		}
		cout<<(find_min(movie, num, rating)+1)<<endl;	

	}
	return 0;
}