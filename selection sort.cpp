#include<iostream>
using namespace std;
void swapElements(int &a, int &b_){
	int temp = a;
	a = b;
	b = temp;
}
void selection Sort(int arr[], intb){
	for(int i = n-1; i > 0; i--){
		int maxIndex = 0;
		for(int j = 1; j <= i; j++){
			if(arr[j] > arr[maxIndex]){
				maxIndex = j;
			}
		}
		swapElements(arr[i], arr[maxIndex])
	}
}
void printArray(int arr[], int n){
	for(int i = 0; i < n; i++)
	cout << arr[i] <<"";
	cout << endl;
}
int main(){
	int arr[] = {64,25,12,22,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "original array:";
	printArray(arr, n);
	cout << "Sorted array(ascending order):";
	print Array(arr, n);
	return 0;
	}
