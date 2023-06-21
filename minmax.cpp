/* C programme to implement the minimum and maximum element in the given array */
//Header file section
#include<stdio.h>
//definition section
int minmax1(int*,int);
int minmax2(int*,int);
//Main Function
int main(){
	int arr[] = {1,7,3,8,12,6,9,4};
	int n = 8;
	minmax1(arr,n);
	printf("\n");
	minmax2(arr,n);	
}
//Function 1 to find the min and maximum element's in the given array 
int minmax1(int arr[],int n){
	int min = arr[0];
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("min = %d , max = %d ",min,max);
}
//Function 1 to find the min and maximum element's in the given array
int minmax2(int arr[],int n){
	int min,max,i;
	if(n==1){
		min = arr[0];
		max = arr[0];
	}
	if(n%2==0){
		if(arr[0]<arr[1]){
			min = arr[0];
			max = arr[1];
		}
		else{
			min = arr[1];
			max = arr[0];
		}
		i = 2;
	}
	else{
		min = arr[0];
		max = arr[0];
		i = 1;
	}
	while(i<n-1){
		if(arr[i]<arr[i+1]){
			if(arr[i]<min){
				min = arr[i];
			}
			if(arr[i+1]>max){
				max = arr[i+1];
			}
		}
		else{
			if(arr[i]>max){
				max = arr[i];
			}
			if(arr[i+1]<min){
				min = arr[i+1];
			}
		}
		i +=2;
	}
	printf("min = %d , max = %d ",min,max);
}
