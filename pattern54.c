#include<stdio.h>
int main(){
	int i,j,k=1,l = 1,n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		k = l;
		for(j=1;j<=i;j++){
			printf("%d\t",k);
			k++;
			if(j==i){
				k--;
			}
		}
		l = k;
		printf("\n");
	}
}
