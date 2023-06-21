// C Programme to implement the fibonacci sequence without using recursion
//HeaderFiles Section
#include<stdio.h>
//Function declaration
int fib(int*,int);
void display(int*,int);
//Main Function
int main(){
	int n;
	printf("Enter how many number's you want in fibonacci sequence : ");
	scanf("%d",&n);
	int arr[n];
	fib(arr,n);
	display(arr,n);
}
//display array 
void display(int *arr,int n){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
//Fibonacci sequence
int fib(int *arr,int n){
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2;i<n;i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	return 0;
}
