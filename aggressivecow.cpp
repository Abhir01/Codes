#include<iostream>
using namespace std;

bool ispossible(int a[],int n,int k,int mid){
	int cow=1;
	int lastposition=a[0];
	
	for(int i=0;i<k;i++){
		if(a[i]-lastposition>=mid){
			cow++;
			if(cow==k){
				return true;
			}
			lastposition=a[i];
		}
	}
	return false;
}

int ac(int a[],int n,int k){
	
	sort(a.begin(),a.end());
	int s=0;
	int maxi=-1;
	for(int i=0;i<k;i++){
		maxi=max(maxi,a[i]);
	}
	int e=maxi;
	int ans=-1;
	int mid=s+(e-s)/2;
	
	while(s<=e){
		if(ispossible(a,k,mid)){
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



int main(){
	int n = 5;
    int k = 2;
    int stalls[5] = {4,2,1,3,6};

    int a= ac(stalls, n,k);
    cout<<"true ya false:"<<ispossible(stalls,n,k,mid)<<endl;
    
    cout<<a<<endl;
}
