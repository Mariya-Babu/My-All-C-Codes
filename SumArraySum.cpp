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
	printf("Enter p value : ");
	scanf("%d",&p);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			sum = 0;
			for(k=j;k<(n+j-i);k++){
				sum += arr[k];
			}
			if(sum%p==0){
				printf("The length of the longest array which is divisible by the given p value is : %d ",k);
				printf("\n%d",j);
				count++;
				break;
			}
			printf("\n");
		}
		if(count!=0){
			break;
		}
	}
}
