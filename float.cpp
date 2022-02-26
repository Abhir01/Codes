#include<iostream>
using namespace std;

int srinteger(int n){
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
	return ans;
	
}

double precise(int n,int pc,int tempsol){
	double factor=1;
	double ans=tempsol;
	for(int i=0;i<pc;i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
}
int main(){
	
	int num;
	cin>>num;
	
	int tempsol=srinteger(num);
	
	cout<<precise(num,3,tempsol)<<endl;
	return 0;
}
