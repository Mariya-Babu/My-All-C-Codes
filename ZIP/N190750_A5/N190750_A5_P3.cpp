/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 5
       programme Number : 3
  programme Description : C Programme to implement the BinarySearch using the Recursion
 				   Date : 7/19/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
#include<stdio.h>
//Function definition section
int read(int*,int);
int BinarySearch(int*,int,int,int);
//Main function
int main(){
	int n,key;
	printf("...BinarySearch with using the recursion...\n");
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("Enter the search element :");
	scanf("%d",&key);
	BinarySearch(arr,0,n,key);
}
//Function to read the element's from the array
int read(int arr[],int n){
	int i;
	printf("..Enter element's in sorted order..");
	for(i=0;i<n;i++){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
}
//Function to search the given element
int BinarySearch(int arr[],int start,int end,int key){
	int mid = (start+end)/2;
	if(start<=end){
		if(arr[mid]==key){
			printf("The search key is found at the index : %d",mid);
			return mid;
		}
		else if(arr[mid]<key){
			BinarySearch(arr,mid+1,end,key);
		}
		else{
			BinarySearch(arr,start,mid-1,key);
		}
	}
	else{
		printf("Element was not found...");
		return 0;
	}
	
}
