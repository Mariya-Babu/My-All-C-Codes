/* C Programme to implement Longest  subarray sum whih is devisible by the given input k  */
//Header Files section 
#include<stdio.h>
//Definition section

//Main Function
int main(){
	int arr[] = {1,9,4,6,8,11,45,23};
	int n = 8;
	int sum = 0,p,count = 0;
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			sum = 0;
			for(k=j;k<(n+j-i);k++){
				printf("%d\t",arr[k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
