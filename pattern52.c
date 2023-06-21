#include<stdio.h>
int main(){
	int i,j,n;
	int l=0,k=0;
	int x,y;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		l = l+i;
		x = l;
		for(j=n;j>=i;j--){
			if(j==n){
				printf("%d\t",l);
			}
			else{
				x = x - y;
				printf("%d\t",x);
				y++;
			}
			
		}
		printf("\n");
		y = i;
	}
}
