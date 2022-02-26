

#include<iostream>
using namespace std;

int getpivot(int a[],int n){
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
	return s;
}
int binarysearch(int a[],int start,int ending,int key){
	int s=start;
	int e=ending;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(a[mid]==key){
			return mid;
		}else if(a[mid]<key){
			s=mid+1;
		}else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	
}

int main(){
	
	int n;
	cin>>n;
	
	int k;
	cin>>k;
	
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	
	int pivot=getpivot(a,n);
	if(k>=a[pivot]  &&  k<=a[n-1]){
		cout<<binarysearch(a, pivot,n-1,k)<<endl;
	}
	else{
		cout<<binarysearch(a,0,pivot-1,k);
	}
	
}
