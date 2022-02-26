#include<iostream>
using namespace std;

int sr(int n){
	int s=0;
	int e=n;
	int mid=s+(e-s)/2;
	int ans=-1;
	
	
	while(s<=e){
		int square=mid*mid;
		if(square==n){
			return mid;
		}
		else if(n>square){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	
}
int main(){
	
	int num;
	cin>>num;
	
	cout<<sr(num);	
	return 0;
}
