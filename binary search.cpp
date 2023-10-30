#include<iostream>
using namespace std;
int main(){
	int ele,found=0;
    int arr[]={10,19,20,22,27,30,34,37,39,47,51};
    cout<<"enter the element you want to find:";
    cin>>ele;
    int low=0,high=10,mid;
    
    while(low<=high){
    	mid=(low+high)/2;
    	if(ele<arr[mid]){
    		high=mid-1;
		}
		
		else if(ele>arr[mid]){
			low=mid+1;
		}
		
		else if(ele==arr[mid]){
			 cout<<"found @ location:"<<mid;
			 found=1;
			 break;	
		}
	}
	
	if(!found){
		cout<<"not found";
	}
	
	return 0;
}
