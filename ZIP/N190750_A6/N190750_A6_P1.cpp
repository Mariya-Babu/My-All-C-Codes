/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 6
  programme Description : 1
  programme Description : C Programme to implement Selection Sort  
 				   Date : 8/2/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header file section
#include<stdio.h>
//Function definition section
int read(int*,int);
int display(int*,int);
int SelectionSort(int*,int);
//Main function
int main(){
	printf(".....Selection Sort.....\n");
	int n;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("Array before sorting \n");
	display(arr,n);
	printf("Array after sorting \n");
	SelectionSort(arr,n);
	display(arr,n);
}
//Function to read the array element's
int read(int arr[],int n){
	int i;
	printf("Enter the array element's \n");
	for(i=0;i<n;i++){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	return 0;
}
//Function to display the array element's 
int display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
//Function to implement the selection sort
int SelectionSort(int arr[],int n){
	int i,j,min_index,temp;
	for(i=0;i<n;i++){
		min_index = i;
		for(j=i+1;j<n;j++){
			if(arr[min_index]>arr[j]){
				min_index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
	
}
