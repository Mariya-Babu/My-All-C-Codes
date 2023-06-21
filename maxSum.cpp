#include<stdio.h>
//Function definition section
int read(int*,int);
int display(int*,int);
int maxSum(int*,int);
int main(){
	int n;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	int ans[n];
	read(arr,n);
	display(arr,n);
	maxSum(arr,n);
}
//Function to read the array element's 
int read(int arr[],int n){
	printf("Enter the array element's ");
	for(int i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&arr[i]);
	}
	return 0;
}
//Function to display the array element's 
int display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;	
}
//Function to find the maximum sum in the contiguous subarray
int maxSum(int arr[],int n){
	int sum=0,max=arr[0];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum = 0;
			for(int k=i;k<=j;k++){
				printf("%d",arr[k]);
				sum += arr[k];
			}
			printf("\n");
			if(max<sum){
				max = sum;
			}
		}
	}
	printf("The maximum sum in the given array is : %d ",max);
}
