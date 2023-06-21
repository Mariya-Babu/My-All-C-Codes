#include<stdio.h>
//Function definition section
int read(int*,int);
int display(int*,int);
int arrayProduct(int*,int*,int);
int main(){
	int n;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	int ans[n];
	read(arr,n);
	display(arr,n);
	arrayProduct(arr,ans,n);
	printf("\n");
	display(ans,n);
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
//Function to return the array element's product
int arrayProduct(int arr[],int ans[],int n){
	int product = 1;
	for(int i=0;i<n;i++){
		product *= arr[i];
	}
	for(int i=0;i<n;i++){
		ans[i] = product/arr[i];
	}
}
