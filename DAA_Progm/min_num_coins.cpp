//C Programme to perform Minimum number of cions Dynamic Programming
//Header Files
#include<stdio.h>
//Function Declaration
int min(int,int);
void display(int*,int);
//Main Function
int main(){
	int n = 4;
	int coins[n] = {1,5,6,9};
	int w = 10;
	int arr[w+1];
	//filling the array with the first coin
	for(int i=0;i<=w;i++){
		arr[i] = i;
	}
	for(int i=1;i<n;i++){
		printf("%d ",coins[i-1]);
		display(arr,w+1);
		for(int j=0;j<=w;j++){
			if(j<coins[i]){
				continue; 
			}
			else{
				arr[j] = min(arr[j],1+arr[j-coins[i]]);
			}
		}
	}
	printf("%d ",coins[n-1]);
	display(arr,w+1);
	printf("The Minimum number of coins required for making %d weight is %d ",w,arr[w]);
}
//minimum
int min(int a,int b){
	if(a<=b){
		return a;
	}
	else{
		return b;
	}
}
//display
void display(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
