//C Programme to perform the Quick Sort
//HeadFiles
#include<stdio.h>
void display(int*,int);
int read(int*,int);
int quicksort(int*,int,int);
int partation(int*,int,int);
int swap(int*,int*);
//Main
int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	int arr[n];
	read(arr,n);
	printf("Array before sorting...\n");
	display(arr,n);
	quicksort(arr,0,n-1);
	printf("Array after sorting...\n");
	display(arr,n);
}
int read(int arr[],int n){
	for(int i=0;i<n;i++){
//		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
//display 
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
//QuickSort
int quicksort(int arr[],int s,int e){
	if(s<e){
		int pivot = partation(arr,s,e);
		quicksort(arr,s,pivot);
		quicksort(arr,pivot+1,e);
	}
}
//partation 
int partation(int arr[],int s,int e){
	int i = s, j = e;
	int pi = s;
	while(i<=j){
		while(arr[i]<=arr[pi]){
			i++;
		}
		while(arr[j]>arr[pi]){
			j--;
		}
		if(i<j){
			swap(&arr[i],&arr[j]);			
		}
	}
	swap(&arr[j],&arr[pi]);
	return j;
}
//swap
int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
