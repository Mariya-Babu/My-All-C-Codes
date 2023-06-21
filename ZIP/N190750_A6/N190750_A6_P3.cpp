/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 6
  programme Description : 3
  programme Description : C Programme to implement Quick Sort  
 				   Date : 8/2/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Headerfiles section 
#include<stdio.h>
//Funcntion definition section
int read(int*,int);
int display(int*,int);
int swap(int*,int*);
int QuickSort(int*,int,int);
int partation(int*,int,int);
//Main Function
int main(){
	printf(" QuickSort Technique \n");
	int n;
	printf("Enter the array size :");
	scanf("%d",&n);
	int arr[n];
	read(arr,n);
	printf("\nArray before sorting \n");
	display(arr,n);
	printf("\nArray after sorting \n");
	QuickSort(arr,0,n-1);
	display(arr,n);
}
//Read function 
int read(int arr[],int n){
	int i;
	printf("\nEnter array element's :\n");
	for(i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	return 0;
}
//Display function 
int display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
//Quick Sort function
int QuickSort(int arr[],int lb,int ub){
	int loc;
	if(lb<ub){
		loc = partation(arr,lb,ub);
		QuickSort(arr,lb,loc-1);
		QuickSort(arr,loc+1,ub);
	}
}
//Partation function
int partation(int arr[],int lb,int ub){
	int pivot=arr[lb];
	int s = lb;
	int e = ub;
	while(s<e){
		while(pivot>=arr[s]){
			s++;
		}
		while(pivot<arr[e]){
			e--;
		}
		if(s<e){
			swap(&arr[s],&arr[e]);	
		}
	}
	swap(&arr[lb],&arr[e]);
	return e;
}
//Function to swap the given element's
int swap(int *ptr,int *qtr){
	int temp;
	temp = *ptr;
	*ptr = *qtr;
	*qtr = temp;
}
