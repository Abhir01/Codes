#include<iostream>
using namespace std;


int pivot(int a[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(a[mid]>=a[0]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	
	return a[s];
}

int main(){
int a[100];

int n;
cin>>n;

for(int i=0;i<n;i++){
	cin>>a[i];
}	
cout<<pivot(a,n);	
	
	return 0;
}
