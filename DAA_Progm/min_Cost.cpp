//C Programmer to implement the travelling sales person problem's
#include<stdio.h>
int M[10][10],visited[10],n,cost=0;
//take input
void takeInput(){
	int i,j;
	printf("Enter the number of villages: ");
	scanf("%d",&n);
	printf("\nEnter the adcency matrix \n");
	for(i=0;i<n;i++){
		for( j=0;j < n;j++){
			printf("M[%d][%d] : ",i,j);
			scanf("%d",M[i][j]);	
		}
		visited[i]=0;
	}
	printf("\n\nThe cost list is:");
		for( i=0;i < n;i++){
			printf("\n");
			for(j=0;j < n;j++)
				printf("%d  ",M[i][j]);
		}
	}
 
void mincost(int city){
	int i,ncity; 
	visited[city]=1;
	printf("%d--->",city);
	ncity=least(city);
	if(ncity==999){
		ncity=0;
		printf("%d",ncity);
		cost += M[city][ncity];
		return;
	}
	mincost(ncity);
}
 
int least(int c){
	int i,nc=999;
	int min=999,kmin;
	for(i=0;i < n;i++){
		if((M[c][i]!=0)&&(visited[i]==0)){
			if(M[c][i]+M[i][c] < min){
				min=M[i][0]+M[c][i];
				kmin=M[c][i];
				nc=i;
			}
		}
	}
	if(min!=999)
	cost+=kmin;
	return nc;					
}
 
int main(){
	takeInput();
	printf("\n\nThe Path is:\n");
	mincost(0); //passing 0 because starting vertex
	printf("\n\nMinimum cost is %d\n ",cost);
	return 0;
}
