//C Programme to performe the subsets sum problem using backtracking
//HeaderFiles Section
#include<stdio.h>
int SOS(int,int,int,int*,int*,int,int);
//Main
int main(){
	int n = 6;
	int arr[n] = {5,10,12,13,15,18};
	int m = 30;
	int s = 0, r = 0,k = 0;
	int x[n];
	for(int i=0;i<n;i++){
		x[i] = 0;
		r += arr[i];
	}
	SOS(s,k,r,arr,x,n,m);
}
//Sum Of Subsets
int SOS(int s,int k,int r,int arr[],int x[],int n,int m){
	x[k] = 1;
	//generate left child
	if(s+arr[k]==m){
		//subset was found
		for(int i=0;i<k+1;i++){
			if(x[i]==1){
				printf("%d ",arr[i]);	
			}
		}
		printf("\n");
	}
	else{
		if(s+arr[k]+arr[k+1]<=m){
			SOS(s+arr[k],k+1,r-arr[k],arr,x,n,m);			
		}
	}
	//generate right child
	if((s+r-arr[k]>=m) && (s+arr[k+1]<=m)){
		x[k] = 0;
		SOS(s,k+1,r-arr[k],arr,x,n,m);
	}
}


