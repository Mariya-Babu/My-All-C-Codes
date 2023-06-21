/*  Name = N.Mariya Babu 
	ID = N190750
	Date = 19 july 2022  
	C Programme to implement the BinarySearch without using the Recursion */
#include<stdio.h>
//Function  defintion section
int read(int*,int);
int BinarySearch(int*,int,int);
//Main function
int main(){
	int n,key;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("Enter the searching element :");
	scanf("%d",&key);
	BinarySearch(arr,key,n);
}
//Function  to read element's of the array
int read(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
}
//Function to Search element in the given array
int BinarySearch(int arr[],int key,int n){
	int start=0,end=n;
	int flag = 0;
	int mid = (start+end)/2;
	while(start<end){
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
