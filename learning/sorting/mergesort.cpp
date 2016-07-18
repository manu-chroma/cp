#include <bits/stdc++.h>
using namespace std;

void merge(int* arr, int a, int b, int c ) { // c is the separation 
	int arr1[100], arr2[100];

	int size1 = b-a+1;
	int size2 = c-b;
	//copying contents of array 1
	for (int i = a, j =0 ; j < size1; i++, j++) // b=4
	{	
		arr1[j] = *(arr+i);
	}

	//copying contents of array 2
	for (int i = b+1, j =0 ; j < size2; i++, j++)
	{	
		arr2[j] = *(arr+i);
	}

	//actual merge
	int i = 0, j=0, k=a;
	for (; (i < size1) && (j < size2) ; k++)
	{
		if(arr1[i] > arr2[j]) {
			*(arr+k) = arr2[j];
			j++;
		}

		else if(arr1[i] < arr2[j] ) {
			*(arr+k) = arr1[i];
			i++;
		}
	}

	//copy remaining
	for (; (j < size2) ; k++)
	{
		*(arr+k) = arr2[j];	
	}

	for(; i < size1; k++) {
		*(arr+k) = arr1[i];
		i++;
	}
		
}

void mergeSort(int arr[], int p, int q) {
	
	if(p < q) { 
	//return;
	
	int mid = (p+q)/2; //gives floor

	mergeSort(arr,p,mid);
	mergeSort(arr,mid+1,q);

	merge(arr,p,mid,q);
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	//merge(arr,0,4,8);
	mergeSort(arr,0,size-1);
	

	// print array
	for(int i=0;i<9; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
