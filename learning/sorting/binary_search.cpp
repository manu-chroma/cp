#include <bits/stdc++.h>
using namespace std;

bool search_req(int arr[], int start, int end, int key) {
	int mid = (start+end)/2;

	if(start > end) {
		return 0;
	}

	else if(arr[mid] == key) {
		return 1;
	}
	else if (arr[mid] > key) {
		search_req(arr, start, mid-1, key);
	}
	else if (arr[mid] < key) {
		search_req(arr, mid+1, end, key);
	}
} 

bool search_iter(int arr[], int start, int end) {

}

int main(int argc, char const *argv[])
{
	int arr[] = {1,4,6,8,89,5,4,3,6,5,5,6,4,76,34,7,45,3,3,6,7,8,8,87,65,43,32};
	int sorted[] = {1,3,7,9,23,67,88,90};
	int size = sizeof(sorted)/sizeof(sorted[0]), key;
	cin>>key;
	if(search_req(sorted,0,size,key))
		cout << "found" << endl;
	else
		cout << "not found" << endl;
	return 0;
}
