#include<iostream>
using namespace std;

int main(){
	int arr[10];
	cout<<"enter the element:";
	for(int &ele:arr){
		cin>>ele;
		cout<<"\n";
	}
    int max=0;
    for(int i=0;i<10;i++){
    	if(max < arr[i])
    	max=arr[i];
	}
	cout<<"the max no is:"<<max<<endl;
	
	return 0;
}
