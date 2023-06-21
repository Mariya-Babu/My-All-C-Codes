/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 5
       programme Number : 1
  programme Description : C Programme to find an Element using LinearSearch   
 				   Date : 7/19/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
//Function definition section
int read(int*,int);
int LinearSearch(int*,int,int);
//Main function
int main(){
	int n,key;
	printf("LinearSearch implementation....\n");
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("Enter the search element :");
	scanf("%d",&key);
	LinearSearch(arr,key,n);
}
//Read Function 
int read(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&arr[i]);
	}
}
//LinearSearch Function 
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
		return -1;
	}
}
