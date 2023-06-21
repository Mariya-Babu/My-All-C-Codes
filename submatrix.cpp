#include<stdio.h>
int main(){
	printf("Hello User");
	int arr[6] = {1,2,5,9,3,8};
	int i,j,k=0;
	for(i=0;i<6;i++){
		for(k=0;k<6;k++){
			for(j=k;j<6;j++){
			printf("%d\t",arr[j]);
		}
		printf("\n");	
		}
	}
}
