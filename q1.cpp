//Name - Mehak Verma
//Roll No-  2010990461
// Set No- 3
//Ques 1:-

#include<iostream>
using namespace std;

void swapArr(int arr[],int n){
	for(int i=1;i<n;i=i+2){
		if(arr[i-1]>arr[i]){
			swap(arr[i-1],arr[i]);
		}
		if(i+1 < n && arr[i+1]>arr[i]){
			swap(arr[i+1],arr[i]);
		}
	}
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	swapArr(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}