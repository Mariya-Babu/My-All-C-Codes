/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 5
       programme Number : 2
  programme Description : C Programme to find an Element using Binary Search without recursion  
 				   Date : 7/19/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
//Function  defintion section
int read(int*,int);
int BinarySearch(int*,int,int);
//Main function
int main(){
	int n,key;
	printf("...BinarySearch without using the recursion \n");
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("Enter the searching element :");
	scanf("%d",&key);
	BinarySearch(arr,key,n);
}
//Read Function 
int read(int arr[],int n){
	int i;
	printf("..Enter Element's  in sorted order..");
	for(i=0;i<n;i++){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
}
//Binary Search 
int BinarySearch(int arr[],int key,int n){
	int start=0,end=n;
	int flag = 0;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==key){
			printf("Search element is found at the index : %d",mid);
			flag++;
			return mid;
		}
		else if(arr[mid]<key){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}
	if(flag==0){
			printf("Search element is not found....");
	}
}
