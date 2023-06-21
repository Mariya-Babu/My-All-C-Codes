#include<stdio.h>
int main(){
	static int arr[] = {1,9,5,9,6,2};
	int n = 6;
	for(int i=0;i<n;i++){
		for(int j=0;j<(n-i);j++){
			for(int k=j;k<=(i+j);k++){
				printf("%d",arr[k]);
			}
			printf("\n");
		}
		printf("\n"); 
	}
}
