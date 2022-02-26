#include<iostream>
using namespace std;

int bs(int a[],int n,int key){

int s=0;
int e=n-1;
int mid=s+(e-s)/2;

while(s<=e){
if(a[mid]==key){
    return mid;
}    
else if(key>a[mid]){
    s=mid+1;
}
else{
    e=mid-1;
}
mid=s+(e-s)/2;
}
return -1;
}


int main(){
    int a[100];
    int n;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;

    cout <<"found at:-> "<<bs(a,n,key);
    cout<<"kya hal hai";
    cout<<"multiply";
    return 0;
}