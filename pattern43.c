#include<stdio.h>
int main(){
	int i,j,k = 0,n,x;
	static int l = 1;
	static int z = 0;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		l = l + k;
		x = i;
		z = l;
		for(j=i;j<=n;j++){
			if(j==i){
				printf("%d\t",z);
			}
			else{
				z = z - x;
				printf("%d\t",z);
				x++;
			}
		
		}
		k = i;
		printf("\n");
	}
	
}
	
