//FLOYD WARSHALLS ALGORITHM:
#include<stdio.h>
#include<stdlib.h>
int min(int a,int b){
	return (a<b?a:b;)
}
void floyds(int d[10][10],int n){
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++)
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	}
}
}
int main(){
	int i,j,n,d[10][10];
	printf("\n Enter no of nodes:");
	scanf("%d",&n);
	printf("NOTE IF INFINITY IS IN YOUR MATRIX PUT 9999 IN PLACE OF  IT\n");
	printf("Enter weighted matrix\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&d[i][j]);
		}
	}
	floyds(d,n);
	printf("\n the all pair shortest path\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
