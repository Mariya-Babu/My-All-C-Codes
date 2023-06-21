/* C Programme to search elemennt  in a sorted array */
#include<stdio.h>
//Function definition section
int read(int*,int);
int display(int*,int);
int RotateArray(int*,int,int);
int search(int*,int,int);
//Main Function
int main(){
	int n,key;
	printf("Enter the array size :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	display(arr,n);
	int k;
	printf("Enter the k value :");
	scanf("%d",&k);
	RotateArray(arr,n,k);
	display(arr,n);
	printf("Enter the search key :");
	scanf("%d",&key);
	search(arr,n,key);
	
}
//Function to read the array element's
int read(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&arr[i]);
	}
}
int display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
//Function to rotate the array
int RotateArray(int arr[],int n,int k){
	int i=0,x=k;
	int b[n];
	do{
		b[i] = arr[x];
		i++;
		x = (k+i)%n;
	}while(x!=k);
	for(i=0;i<n;i++){
		arr[i] = b[i];
	}
}
//Function to search the element
int search(int arr[],int n, int key){
	int i,flag=0;
	int x = n/2;
	for(i=0;i<x;i++){
		if(arr[x-i]==key || arr[x+i]==key || arr[x-i-1]==key){
			flag++;
			if(arr[x-i]==key){
				printf("The search key is present at the index : %d",x-i);
				return x-i;
			}
			if(arr[x+i]==key){
				printf("The search key is present at the index : %d",x+i);
				return x+i;
			}
			if(arr[x-i-1]==key){
				printf("The search key is present at the index : %d",x-i-1);
				return x-i-1;
			}
		}
	}
	if(flag==0){
		printf("The key is not found...");
		return -1;
	}
	
}
