#include<stdio.h>
//Function definition section
int read(int*,int);
int display(int*,int);
int findPairs(int*,int,int);
int main(){
	int n;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	display(arr,n);
	int key;
	printf("Enter the key value :");
	scanf("%d",&key);
	findPairs(arr,n,key);
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
//Function to find the pair's of the given number in an array
int findPairs(int arr[],int n,int key){
	int value;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			value = arr[i] + arr[j];
			if(value==key){
				printf("The pair's of the given number's are : (%d,%d)",arr[i],arr[j]);
				return 0;
			}
		}
	}
}
