#include<iostream>
using namespace std;

bool ispossible(int a[],int n,int m,int mid){
	int student=1;
	int pagesum=0;
	
	for(int i=0;i<n;i++){
		if(pagesum+a[i]<=mid){
			pagesum+=a[i];
		}
		else{
//			pagesum bada hogya second stuf
			student++;
			if(student>m || a[i]>mid){
				return false;
			}
			
			pagesum=a[i];
		}
	}
	return true;
}

int allocatebooks(int a[],int n,int m){
	
	int s=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	int e=sum;
	
	int ans=-1;
	int mid=s+(e-s)/2;
	
	while(s<=e){
		if(ispossible(a,n,m,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}




int main(){


int n = 4;
    int m = 2;
    int pages[5] = {12,34,67,90};

    int a= allocatebooks(pages, n, m);
    cout<<"true ya false:"<<ispossible(pages,n,m,a)<<endl;
    
    cout<<a<<endl;
}
