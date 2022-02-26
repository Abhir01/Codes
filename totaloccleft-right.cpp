#include<iostream>
using namespace std;

int	 left(int a[],int n,int key){
	
	int s=0;
	int e=n-1;
	int ans=-1;
	
	int mid=s+(e-s)/2;
	
	while(s<=e){
		if(a[mid]==key){
			ans=mid;
			e=mid-1;
		}
		if(key>a[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		
		mid=s+(e-s)/2;
		
	}
	return ans;
}

int right(int a[],int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(a[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > a[mid]) {//Right me jao
            s = mid + 1;
        }
        else {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
	int a[8];
	int i,n;
	
	cout<<"kitne elements hai: ";
	cin>>n;
	
    cout<<"enter key:-> ";
	int key;
	cin>>key;

	cout<<"enter array elements: ";

	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	

	
	int x=left(a,n,key);
    // cout<<a;
	int b=right(a,n,key);
    // cout<<b;

    int c=b-x+1;
    cout<<c;
	
}

