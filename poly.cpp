/* C Programme to clauculate the value of the polinomiyal */
//HeaderFiles section
#include<stdio.h>
#include<math.h>
//Function definition section
int readpoly(int*,int);
int displaypoly(int*,int);
int ValueOfPoly(int*,int,int);
//Main function
int main(){
	int deg,x,value;
	printf("Enter the degree of the polinomiyal :");
	scanf("%d",&deg);
	int n = deg+1;
	int arr[n];
	readpoly(arr,n);
	displaypoly(arr,n);
	printf("\nEnter the x value : ");
	scanf("%d",&x);
	value=ValueOfPoly(arr,n,x);
	printf("The value of the polinomiyal is : %d",value);
	
}
//Function to read the polinomiyal 
int readpoly(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter the x^%d cofficent : ",i);
		scanf("%d",&arr[i]);
	}
}
//Function to display the polinomiyal
int displaypoly(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("+(%dx^%d)",arr[i],i);	
	}
}
int ValueOfPoly(int arr[],int n,int x){
	int i,sum = 0;
	for(i=0;i<n;i++){
		sum += arr[i]*pow(x,i);
	}
	return sum;
}
