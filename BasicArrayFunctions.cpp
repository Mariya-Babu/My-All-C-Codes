/* C rogramme to perform the basic array operations */
//Header Files Section
#include<stdio.h>
//Function definition section
int readSize(int*);
int readElements(int*,int);
int display(int*,int);
//Main Function
int main(){
	int n;
	readSize(&n);
	int arr[n];
	readElements(arr,n);
	display(arr,n);	
}
//Function to read the size of the array 
int readSize(int *n){
	printf("Enter the size of the array : ");
	scanf("%d",n);
}
//Function to read the array element's 
int readElements(int arr[],int n){
	printf("Enter the array Element's ");
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
//Function to display the array element's 
int display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
