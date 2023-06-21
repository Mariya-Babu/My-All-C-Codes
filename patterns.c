#include<stdio.h>
int main(){
	int i,j,k,n,l;
	printf("Enter the n value :");
	scanf("%d",&n);
//	k = (n*(n+1))/2;
	for(i=n;i>0;i--){
		k = n-1;
		l = i;
		for(j=1;j<=i;j++){
			printf(" %d ",l);
			l = l+k--;	
		}
		printf("\n");
	}
	return 0;
}
