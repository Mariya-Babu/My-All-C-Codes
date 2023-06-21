/* C Programme to perform the Quick Sort */
//HaeaderFiles Section
#include<stdio.h>
//Function Declaration Section
int QuickSort(int*,int,int);
int partation(int*,int,int);
int swap(int*,int*);
void display(int*,int);
//Main Function
int main(){
	int arr[7] = {6,3,8,1,9,5,4};
	printf("Array before sorting..");
	display(arr,7);
	QuickSort(arr,0,7);	
	printf("\nArray after Sorting...");
	display(arr,7);
}
//QuickSort
int QuickSort(int arr[],int start,int end){
	int loc;
	if(start<end){
		loc = partation(arr,start,end);
		QuickSort(arr,start,loc-1);
		QuickSort(arr,loc+1,end);
	}

}
//Partation
int partation(int arr[],int start,int end){
	int temp;
	int i=start,j=end;
	int p = arr[start];
	while(i<j){
		while(arr[i]<=p){
			i++;
		}
		while(arr[j]>p){
			j--;
		}
		if(i<j){
			swap(&arr[i],&arr[j]);			
		}
	}
	swap(&arr[j],&arr[start]);
	return j;
}
//Swap
int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
//Display
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

