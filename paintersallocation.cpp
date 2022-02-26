#include<iostream>
using namespace std;


bool isPossibleToPaint(int boards[], int n,int numPainterAvailable, int time){
    int sum = 0;
    int painterNumber = 1;
    for(int x=0;x<n;x++){
        if(sum + boards[x] <= time){
            sum += boards[x];
        }else{
            painterNumber++;
            if(painterNumber > numPainterAvailable || boards[x] > time){
                return false;
            }
            sum = boards[x];
        }
    }
    return true;
}


int findLargestMinDistance(int boards[],int n, int p)
{
    int ans = -1;
	int low=0; 
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=boards[i];
	}
	
	int high=sum;
    
    while(low <= high){
        int mid = low + (high - low)/2;
        if(isPossibleToPaint(boards, n,p, mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
	int n = 5;
    int p = 2;
    int boards[5] = {10,20,30,40,50};

    int a= findLargestMinDistance(boards, n, p);
    cout<<"true ya false:"<<isPossibleToPaint(boards,n,p,a)<<endl;
    
    cout<<a<<endl;
}

