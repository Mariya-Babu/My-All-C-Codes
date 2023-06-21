/* C Programme to rotate the given array */
//Header files section
#include<stdio.h>
//Function definition section
int read(int*,int);
int display(int*,int);
int ArrayRotation1(int*,int,int);
int ArrayRotation2(int*,int,int);
//Main section
int main(){
	int n,d;
	printf("Enter the array size :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	display(arr,n);
	printf("Enter the value from where to rotate the array : ");
	scanf("%d",&d);
	ArrayRotation1(arr,n,d);
	display(arr,n);
	ArrayRotation2(arr,n,d);
	display(arr,n);
}
//Function to read the element's into the array
int read(int arr[],int n){
	int i;
	printf("Enter the array element's : ");
	for(i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
//Function to display the element's of the array
int display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
//Function to rotate the array method 1
int ArrayRotation1(int arr[],int n,int d){
	int temp[n];
	for(int i=0;i<=n-d;i++){
		temp[i] = arr[d+i];
	}
	int k=n-d;
	for(int i=0;i<d;i++){
		temp[k++] = arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i] = temp[i];
	}
}
//Function to rotate the array method 2
int ArrayRotation2(int arr[],int n,int d){
	int temp;
	for(int i=0;i<=d;i++){
		temp = arr[0];
		for(i=0;i<n-1;i++){
			arr[i] = arr[i+1];
		}
		arr[i] = temp;
	}
} 
