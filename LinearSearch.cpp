/*  Name = N.Mariya Babu 
	ID = N190750
	Date = 19 july 2022 
	C Pogramme to implement the linear search */
#include<stdio.h>
//Function definition section
int read(int*,int);
int LinearSearch(int*,int,int);
//Main function
int main(){
	int n,key;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("Enter the search element :");
	scanf("%d",&key);
	LinearSearch(arr,key,n);
}
//Function to read element's from the array
int read(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&arr[i]);
	}
}
//Function to search the element in the given array
int LinearSearch(int arr[],int key,int n){
	int i,flag=0;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("Seach key is found at the index : %d",i);
			flag++;
			return i;
		}
	}
	if(flag==0){
		printf("Element not present...");
	}
}
