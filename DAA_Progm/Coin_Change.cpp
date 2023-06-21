// C Programme to implement the Coin Change Problem using Dynamic Programming
//HeaderFiles Section
#include<stdio.h>
//Function declaration
void display(int*,int);
void read(int*,int);
int coin_change(int*,int,int*,int);
//Main Function
int main(){
	int n,w,total;
	printf("Enter the no.of coin's :");
	scanf("%d",&n);
	int coin[n];
	printf("Enter the coins of different denomination : ");
	read(coin,n);
	display(coin,n);
	printf("Enter the weight :");
	scanf("%d",&w);
	int W[w+1];
	total = coin_change(coin,n,W,w+1);
	printf("The total no.of posiblities are : %d ",total);
}
//read
void read(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("a[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
//display array 
void display(int *arr,int n){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
//Coin Change problem
int coin_change(int *coin,int n,int *W,int w){
	int x;
	printf("\n");
	for(int i=0;i<w;i++){
		printf("%d  ",i);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<w;j++){
			if(i==0){
				x = j%coin[i];
				if(x==0){
					W[j] = 1;
				}
				else{
					W[j] = 0;
				}
			}
			else{
				if(j<coin[i]){
					continue;
				}
				else{
					x = j - coin[i];
					W[j] = W[j]+W[x];
				}
			}
		}
		display(W,w);
	}
	return W[w-1];
}
