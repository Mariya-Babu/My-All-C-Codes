#include<stdio.h>
int main(){
	int i,j,k,l=0,n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		l = i;
	//	printf("hi");
		for(j=1;j<=i;j++){
			if(j==1){
				printf("%d\t",l);
			}
			else{
				k = (n-j);
				l = l + k;
				printf("%d\t",l);
			}
		}
		printf("\n");
	}
}
	
