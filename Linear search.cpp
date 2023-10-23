#include<iostream>
using namespace std;

int main(){
	int arr[]={10,20,30,40,50,60,70,80};
	int found=0,ele;
	cout<<"Enter the element you want to find:"<<endl;
	cin>>ele;
	for(int i=0;i<=8;i++){
		if(ele == arr[i]){
		cout<<"found @ location:"<<i;
		found=1;
		break;
	}
	}
	if(!found){
		printf("not found.");
	}
	
	return 0;
}
