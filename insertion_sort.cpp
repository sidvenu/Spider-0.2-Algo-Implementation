#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
	for(int i=0; i<n; i++){
		int pos = i;
		while(pos>=0 && arr[pos]>=arr[i])
			pos--;
		pos++;
		int e = arr[i];
		for(int j=i; j>pos; j--)
			arr[j]=arr[j-1];
		arr[pos] = e;
	}
}

void displayArr(int arr[], int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<' ';
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	insertionSort(arr, n);
	displayArr(arr, n);
	return 0;
}
