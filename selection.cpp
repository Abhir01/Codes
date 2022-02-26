#include<iostream>
using namespace std;

int main(){
	
	
	int a[100];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int minindex=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minindex]){
				minindex=j;
			}
	}	
		swap(a[i],a[minindex]);
	
}	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
