//Name - Mehak Verma
// Roll No-  2010990461
// Set No -3
//Ques 2:-

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<"nums: ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum;
	cout<<"Target: ";
	cin>>sum;
	bool flag=false;
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(sum==arr[i]+arr[j] && arr[i]!=arr[j]){
				cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
				flag=true;
			}
			else{
				flag;
			}
			
		}
	}
	if(flag==false){
		cout<<"Pair Not Found";
	}
	
}